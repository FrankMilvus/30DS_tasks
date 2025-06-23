// Bubble Sort Implementation
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {7, 6, 5, 4, 3, 4, 4, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool needSwaps = true;

    int tmp = 0;

    while (needSwaps)
    {
        needSwaps = false;
        for (int i = 0; i < size - 1; i++)
        {

            if (arr[i] < arr[i + 1])
            {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;

                needSwaps = true;
            }
        }
    }

    for (const auto &element : arr)
    {
        cout << element << ' ';
    }
    cout << endl;
    return 0;
}
