#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int Num = 153;
    int tmpNum = Num;
    int Result = Num;
    int QuantDigit = 0;
    int Sum = 0;

    while (tmpNum > 0)
    {
        tmpNum /= 10;
        ++QuantDigit;
    }
    cout << "Quantity of didgit is: " << QuantDigit << endl;

    int tmp = Num;
    while (tmp > 0)
    {
        int digit = tmp % 10;
        Sum += round(pow(digit, QuantDigit));
        tmp /= 10;
    }

    /*int tmpDidgit = 0;
    int power = QuantDigit;
    for (int i = QuantDigit; i != 0; --i)
    {
        tmpDidgit = Num % 10;
        Sum += round((tmpDidgit, power));
        Num /= 10;
    }*/

    if (Result == Sum)
    {
        cout << "It is a armstrong number" << endl;
    }
    else
    {
        cout << "It is not amstrong number" << endl;
    }
    cout << Sum << " " << Result << endl;
    return 0;
}
