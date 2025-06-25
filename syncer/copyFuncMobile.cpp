/*he simplest way to copy a file in C++ on Windows 11
 (including mobile/tablet devices) is to use the Windows
  API function CopyFile() or CopyFile2().*/

#include <windows.h>
#include <iostream>

// LPCWSTR means: "Long Pointer to Constant Wide String" - essentially a pointer to a read-only Unicode (UTF-16) string.
int copyFileMobile(LPCWSTR sourceFile, LPCWSTR destFile)
{
    /*LPCWSTR sourceFile = L"C:\\path\\to\\source.txt";
    LPCWSTR destFile = L"C:\\path\\to\\destination.txt";*/

    // Copy file (fails if destination exists)
    if (CopyFileW(sourceFile, destFile, TRUE))
    {
        std::wcout << L"File copied successfully.\n";
    }
    else
    {
        std::wcerr << L"Failed to copy file. Error: " << GetLastError() << L"\n";
    }

    return 0;
}