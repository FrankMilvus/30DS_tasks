#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // first perfect numbers: 6, 28,496,8128,33550336
    int PerfectNum = 33550336 + 1;
    vector<int> Divisors;

    for (int i = 1; i != PerfectNum; i++)
    {
        if (PerfectNum % i == 0 && PerfectNum / i != 1)
        {
            Divisors.push_back(i);
        }
    }
    int sum = 0;
    for (const auto &element : Divisors)
    {
        sum += element;
    }
    if (PerfectNum == sum)
    {
        cout << "Uhra!!! this is perfect number: " << PerfectNum << endl;
    }
    else
    {
        cout << "I am really sorry it is NOT perfect number((" << endl;
    }

    cout << "Sum is: " << sum << endl;

    // to see guts of vector
    cout << "Guts of vector: ";
    for (const auto &element : Divisors)
    {
        cout << element << ' ';
    }

    return 0;
}
