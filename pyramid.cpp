/*Pattern Printing (Pyramid, Diamond)*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int lines = 5;
    int rows = 5;

    for (int i = 0; i <= lines; i++)
    {
        for (int j = 0; j < lines - i; j++)
        {
            cout << ' ';
        }
        for (int y = 0; y < 2 * i - 1; ++y)
        {
            cout << '*';
        }
        cout << endl;
    }
    // dimond part

    for (int i = lines; i != 0; --i)
    {
        for (int j = 0; j < lines - i; j++)
        {
            cout << ' ';
        }
        for (int y = 0; y < 2 * i - 1; ++y)
        {
            cout << '#';
        }
        cout << endl;
    }

    return 0;
}
