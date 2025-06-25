// simple file syncer for my own file.

#include <iostream>
#include <string>
#include "./copyFuncLocally.cpp"
#include "./copyFuncMobile.cpp"
#include "./Data.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Data data;

    // copy file locally to USB
    // C:\Users\Frank\Desktop\tmp.txt
    string UserLocalPath;
    cin >> UserLocalPath;
    data.addLocalPath(UserLocalPath);
    string FileSorce = data.getPath();
    // string FileSorce = "C:\\Users\\Frank\\Desktop\\tmp.txt";
    string FileDistinationUSB = "D:\\tmp(USB).txt";
    copyFileLocally(FileSorce, FileDistinationUSB);

    // copy file using mobile aprouch
    LPCWSTR FileSourceMobile = L"C:\\Users\\Frank\\Desktop\\tmp.txt";
    LPCWSTR FileDestinationMobile = L"C:\\Users\\Frank\\CrossDevice\\Redmi Note 14 Pro+ 5G\\storage\\Documents\\tmp(Mobile).txt";
    copyFileMobile(FileSourceMobile, FileDestinationMobile);
    return 0;
}
