#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    int largest;
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    {
        /* code */
    }
    cout << "The largest number is " << largest << "." << endl;

    return 0;
}
