#include <iostream>
#include <cmath>
using namespace std;

// Prime Number Checker
int main(int argc, char const *argv[])
{
    cout << "Enter number for check, prime is or not: ";
    int userNum;
    cin >> userNum;

    if (userNum <= 1)
    {
        cout << "This isn't prime number";

        return 0;
    }
    else if (userNum == 2)
    {
        cout << userNum << " is prime number";
        return 0;
    }
    else if (userNum % 2 == 0)
    {
        cout << userNum << " isn't prime";
        return 0;
    }

    bool isPrime = true;
    int limit = sqrt(userNum);
    for (int i = 3; i <= limit; i += 2)
    {
        if (userNum % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << userNum << " is Prime." << endl;
    }
    else
    {
        cout << userNum << " is not Prime." << endl;
    }

    return 0;
}
