// Count Vowels/Consonants in String

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    string vow = "AEIOUY";
    string con = "BCDFGHJKLMNPQRSTVWXYZ";
    string Str = "Hello world, I am so glad to see you!!";

    unsigned int qVow = 0;
    unsigned int qCon = 0;
    unsigned int qOther = 0;

    char cur = ' ';

    for (int i = 0; i < Str.length(); ++i)
    {
        cur = Str[i];

        auto fVow = find(vow.begin(), vow.end(), cur);
        if (fVow != vow.end())
        {
            ++qVow;
        }
        else
        {
            auto fCon = find(con.begin(), con.end(), cur);
            if (fCon != con.end())
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

    return 0;
}
