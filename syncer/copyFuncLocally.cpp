// copy file locally, can copy file to mobile device

#include <iostream>
#include <fstream>

bool copyFileLocally(const std::string &sourcePath, const std::string &destinationPath)
{
    std::ifstream sourceFile(sourcePath, std::ios::binary);
    std::ofstream destinationFile(destinationPath, std::ios::binary);

    // Check if the source file was successfully opened
    if (!sourceFile)
    {
        std::cerr << "Local copying: Error opening source file!" << std::endl;
        return false;
    }

    // Check if the destination file was successfully opened
    if (!destinationFile)
    {
        std::cerr << "Local copying: Error opening destination file!" << std::endl;
        return false;
    }

    // Copy the file contents
    destinationFile << sourceFile.rdbuf();

    // Check for any errors during the copy process
    if (!sourceFile || !destinationFile)
    {
        std::cerr << "Local copying: Error during file copy!" << std::endl;
        return false;
    }

    std::cout << "Local copying: File copied successfully!" << std::endl;
    return true;
}