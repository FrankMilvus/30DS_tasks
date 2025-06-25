// simple file syncer for my own file.

#include <iostream>
#include <string>
#include "./copyFuncLocally.cpp"
using namespace std;

int main(int argc, char const *argv[])
{

    string FileSorce = "C:\\Users\\Frank\\Desktop\\tmp.txt";
    string FileDistinationUSB = "D:\\tmp(USB).txt";
    copyFileLocally(FileSorce, FileDistinationUSB);

    return 0;
}
