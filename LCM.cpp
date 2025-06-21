/*The LCM (Least Common Multiple) of two numbers is the smallest number that is a multiple of both of the original numbers. In other words, it is the smallest number that both of the original numbers divide into without leaving a remainder.

For example, to find the LCM of 4 and 6:

    Multiples of 4: 4, 8, 12, 16, 20, ...
    Multiples of 6: 6, 12, 18, 24, 30, ...

The smallest common multiple of both 4 and 6 is 12, so the LCM of 4 and 6 is 12.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int aa = 4;
    int bb = 6;
    int LCM = 0;
    bool isLCMfound = false;

    int tmpAA = aa;
    int tmpBB = bb;

    while (isLCMfound == false)
    {
        tmpAA += aa;
        if (tmpAA % bb == 0 & tmpBB % aa == 0)
        {
            LCM = tmpAA;
            isLCMfound = true;
        }
        tmpBB += bb;
        if (tmpAA % bb == 0 & tmpBB % aa == 0)
        {
            LCM = bb;
            isLCMfound = true;
        }
    }
    cout << "LCM is: " << LCM << endl;
    return 0;
}
