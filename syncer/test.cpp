#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str("hello word");
    string strProccessed;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << ' ';

        if (str[i] == 'l')
        {
            strProccessed += str[i];
            strProccessed += '\\';
        }
        else
        {
            strProccessed += str[i];
        }
    }
    cout << endl;

    for (auto const &letter : strProccessed)
    {
        cout << letter << ' ';
    }
    cout << endl;
    cout << "---" << strProccessed;

    return 0;
}
