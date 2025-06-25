// simple file syncer for my own file.

#include <iostream>
#include <string>
#include "./copyFuncLocally.cpp"
#include "./copyFuncMobile.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    //"C:\Users\Frank\Desktop\tmp.txt"
    // need to proccess this string first to :

    string FileSorce = "C:\\Users\\Frank\\Desktop\\tmp.txt";

    string FileDistinationUSB = "D:\\tmp(USB).txt";
    copyFileLocally(FileSorce, FileDistinationUSB);

    string FileDistinationMobie = "C:\\Users\\Frank\\CrossDevice\\Redmi Note 14 Pro+ 5G\\storage\\Documents\\tmp(Mobile).txt";
    copyFileMobile(FileSorce, FileDistinationMobie);
    //"C:\\Users\\Frank\\CrossDevice\\Redmi Note 14 Pro+ 5G\\storage\\Documents\\tmp(Mobile)";

    return 0;
}
