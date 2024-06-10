#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

bool isAutomorphic(int num)
{
    int square = num * num;
    int numDigits = countDigits(num);
    int divisor = pow(10, numDigits);
    return square % divisor == num;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAutomorphic(num))
        cout << num << " is an automorphic number." << endl;
    else
        cout << num << " is not an automorphic number." << endl;

    return 0;
}
