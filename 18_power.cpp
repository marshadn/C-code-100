// #include <iostream>
// using namespace std;

// double power(double base, int exponent)
// {
//     if (exponent == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         double result = 1;
//         for (int i = 1; i <= abs(exponent); ++i)
//         {
//             result *= base;
//         }
//         return (exponent < 0) ? 1 / result : result;
//     }
// }

// int main()
// {
//     double base;
//     int exponent;
//     cout << "Enter the base number: ";
//     cin >> base;
//     cout << "Enter the exponent: ";
//     cin >> exponent;

//     cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double base, result;
    int exponent;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    result = pow(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
