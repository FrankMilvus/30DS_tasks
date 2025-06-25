// Here should be all settings of my app and it should be saved locally
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "./converterWstrToStr.cpp"
using namespace std;

class Data
{
private:
    string AddedPath;
    // LPCWSTR
    wstring AddedMobilePath;

public:
    void addLocalPath(const string &localPath);
    void addMobilePath(const string &mobilePath);

    string getPath();
    wstring getMobileMath();
};

void Data::addLocalPath(const string &localPath)

{
    string localPathProccessed;

    for (size_t i = 0; i < localPath.length(); i++)
    {
        cout << localPath[i];

        if (localPath[0] && localPath[localPath.length()] == '"')
        {
        }
        else if (localPath[i] == '\\')
        {
            localPathProccessed += localPath[i];
            localPathProccessed += '\\';
        }
        else
        {
            localPathProccessed += localPath[i];
        }
    }
    AddedPath = localPathProccessed;
    cout << "Path was add: " << localPath << "as " << localPathProccessed << endl;
    cout << endl;
}

void Data::addMobilePath(const string &mobilePath)
{
    // LPCWSTR
    string mobilePathProccessed;

    for (size_t i = 0; i < mobilePath.length(); i++)
    {
        cout << mobilePath[i];

        if (mobilePath[0] && mobilePath[mobilePath.length() - 1] == '"')
        {
        }
        else if (mobilePath[i] == '\\')
        {
            mobilePathProccessed += mobilePath[i];
            mobilePathProccessed += '\\';
        }
        else
        {
            mobilePathProccessed += mobilePath[i];
        }
    }

    AddedMobilePath = StrToWstr(mobilePathProccessed);
    cout << "Path was add: " << mobilePath << "as " << mobilePathProccessed << endl;
    cout << endl;
}

string Data::getPath()
{
    return AddedPath;
}

wstring Data::getMobileMath()
{
    return AddedMobilePath;
}
