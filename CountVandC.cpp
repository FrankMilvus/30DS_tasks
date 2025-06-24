// Count Vowels/Consonants in String

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isInString(char &symbol, const string &where)
{
    for (char c : where)
    {
        c = tolower(c);
        symbol = tolower(symbol);
        if (c == symbol)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    string vow = "aeiou";
    string con = "bcdfghjklmnpqrstvwxyz";
    string Str = "Hello world, I am so glad to see you!!";

    unsigned int qVow = 0;
    unsigned int qCon = 0;
    unsigned int qOther = 0;
    unsigned int qAlpha = 0;

    for (char cur : Str)
    {
        if (isalpha(cur))
        {
            ++qAlpha;
        }

        cur = tolower(cur);
        if (isInString(cur, vow))
        {
            ++qVow;
        }
        else
        {
            if (isInString(cur, con))
            {
                ++qCon;
            }
            else
            {
                ++qOther;
            }
        }
    }
    cout << "In " << Str << " there is vowels: " << qVow << " and Consonants: " << qCon << endl;

    cout << "There are some other symbols: " << qOther << endl;
    cout << "Alphas in string: " << qAlpha << endl;
    cout << "String lenght: " << Str.length() << endl;

    return 0;
}
