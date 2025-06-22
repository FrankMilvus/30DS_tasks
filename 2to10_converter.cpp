// Binary to Decimal Converter

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> binum = {1, 0, 1, 1};
    int power = binum.size();
    int decimal = 0;

    for (const auto &element : binum)
    {
        --power;
        int tmp = pow(2, power);
        decimal += element * tmp;
    }

    cout << "Decimal number is: " << decimal << endl;
    return 0;
}
