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

bool isArmstrong(int num)
{
    int sum = 0;
    int originalNum = num;
    int digits = countDigits(num);

    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
}

int main()
{
    int lower, upper;
    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;

    cout << "Armstrong numbers between " << lower << " and " << upper << " are:" << endl;
    for (int i = lower; i <= upper; ++i)
    {
        if (isArmstrong(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}
