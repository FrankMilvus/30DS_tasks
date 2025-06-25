#include <windows.h>
#include <string>
#include <iostream>

int copyFileMobile(const std::string &sourceFileStr, const std::string &destFileStr)
{
    // Convert narrow strings to wide strings
    std::wstring sourceFile(sourceFileStr.begin(), sourceFileStr.end());
    std::wstring destFile(destFileStr.begin(), destFileStr.end());

    // Copy file (fails if destination exists)
    if (CopyFileW(sourceFile.c_str(), destFile.c_str(), TRUE))
    {
        std::wcout << L"Mobile copying: File copied successfully.\n";
        return 0; // Success
    }
    else
    {
        DWORD error = GetLastError();
        std::wcerr << L"Mobile copying: Failed to copy file. Error: " << error << L"\n";

        // Specific error handling
        if (error == ERROR_FILE_EXISTS)
        {
            std::wcerr << L"Mobile copying: Target file already exists\n";
        }
        else if (error == ERROR_PATH_NOT_FOUND)
        {
            std::wcerr << L"Mobile copying: Path not found\n";
        }

        return 1; // Failure
    }
}