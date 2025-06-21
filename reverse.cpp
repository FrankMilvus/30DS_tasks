#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int UserInput;
    cout << "Enter an integer: ";
    cin >> UserInput;
    int OriginalInput = UserInput;

    int digit, reversed = 0;
    while (UserInput > 0)
    {
        digit = UserInput % 10;
        reversed = reversed * 10 + digit;
        UserInput /= 10;
    }
    cout << reversed;

    if (OriginalInput == reversed)
    {
        cout << "\n"
             << OriginalInput << " is polidrome." << endl;
    }

    return 0;
}
