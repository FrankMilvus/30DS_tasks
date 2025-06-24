// Count Vowels/Consonants in String

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    string vow = "AEIOUY";
    string Con = "BCDFGHJKLMNPQRSTVWXYZ";
    string Str = "Hello world, I am so glad to see you!!";

    unsigned int qVow = 0;
    unsigned int qCon = 0;
    unsigned int qOther = 0;

    char cur = ' ';

    for (int i = 0; i < Str.length(); ++i)
    {
        cur = Str[i];
        
        auto fVow = vow.find(cur);
        if (fVow != string::npos)
        {
            ++qVow;
        }
        else
        {
            auto fCon = Con.find(cur);
            if (fCon != string::npos)
            {
                ++qCon;
            }
            else
            {
                // it isn't vowel or consonatn
                ++qOther;
            }
        }
    }
    cout << "In " << Str << " there is vowels: " << qVow << " and Consonants: " << qCon << endl;

    cout << "There are some other symbols: " << qOther << endl;

    return 0;
}
