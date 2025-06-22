#include <iostream>
using namespace std;

//    Temperature Converter (C/F/K)

int main(int argc, char const *argv[])
{
    int C, F = 0; // 25C-77F
    double K = 0.0;
    cout << "Enter C:";
    cin >> C;

    F = (C * 9 / 5) + 32;
    K = C + 273.15;

    cout << "Celsius: " << C;
    cout << " Fahrenheit: " << F;
    cout << " Kelvin: " << K << endl;
    return 0;
}
