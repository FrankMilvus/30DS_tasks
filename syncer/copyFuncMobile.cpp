/*he simplest way to copy a file in C++ on Windows 11
 (including mobile/tablet devices) is to use the Windows
  API function CopyFile() or CopyFile2().*/
#include <windows.h>
#include <string>
#include <iostream>

int copyFileMobile(const std::wstring &sourceFile, const std::wstring &destFile)
{
    // Copy file (fails if destination exists)
    if (CopyFileW(sourceFile.c_str(), destFile.c_str(), TRUE))
    {
        std::wcout << L"Mobile copying: File copied successfully.\n";
        return 0; // Success
    }
    else
    {
        std::wcerr << L"Mobile copying: Failed to copy file. Error: " << GetLastError() << L"\n";
        return 1; // Failure
    }
}