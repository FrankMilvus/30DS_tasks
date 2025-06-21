#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int CasualNum)
{

    int userNum = CasualNum;

    if (userNum <= 1)
    {
        cout << "This isn't prime number" << endl;
        return 0;
    }
    else if (userNum == 2)
    {
        cout << userNum << " is prime number" << endl;
        return 0;
    }
    else if (userNum % 2 == 0)
    {
        cout << userNum << " isn't prime" << endl;
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
int main(int argc, char const *argv[])
{
    cout << "Enter the start of range: ";
    int start = 0;
    cin >> start;
    cout << "Enter the end of range: ";
    int end = 0;
    cin >> end;

    for (int i = start; i < end; i++)
    {
        isPrime(i);
    }
}
