// Linear Search in Array
#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[] = {7, 6, 5, 4, 3, 4, 4, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Enter number to find: ";
    int target = 4;
    std::cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            std::cout << "Found element: " << target << " in position: " << i << std::endl;
        }
    }
    std::cout << "The " << target << " is found.\n";

    return 0;
}
