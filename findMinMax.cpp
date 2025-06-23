// Find Array Maximum/Minimum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int arr[5] = {7, 6, 5, 4, 3};
    int max = arr[0];
    int min = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "Minimal value in array is: " << min << endl;
    cout << "Maximal value in array is: " << max << endl;
    return 0;
}
