/*Pattern Printing (Pyramid, Diamond)*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cols = 5;
    int rows = 5;

    for (int i = 0; i <= cols; i++)
    {
        for (int j = 0; j < cols - i; j++)
        {
            cout << ' ';
        }
        for (int y = 0; y < 2 * i - 1; ++y)
        {
            cout << '*';
        }
        cout << endl;
    }
    
    }

    return 0;
}
