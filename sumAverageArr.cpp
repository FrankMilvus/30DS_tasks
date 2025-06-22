#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {7, 6, 5, 4, 3};
    int sum = 0;
    int average = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    average = sum / size;

    cout << "Sum of array is: " << sum << endl;
    cout << "Average in this array is: " << average << endl;

    return 0;
}
