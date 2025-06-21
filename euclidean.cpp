#include <iostream>
using namespace std;
/*  Given two numbers, aa and bb, where a>ba>b.
    Divide aa by bb and find the remainder rr.
    Replace aa with bb and bb with rr.
    Repeat the process until bb becomes 0.
    The non-zero remainder at this point is the
     GCD of the original two numbers. */
int main(void)
{
    int aa = 48;
    int bb = 18;
    int remainder = 0;
    while (bb != 0)
    {
        remainder = aa % bb;
        aa = bb;
        bb = remainder;
    }
    if (bb == 0)
    {
        cout << "GCD is " << aa << endl;
    }
    return 0;
}
