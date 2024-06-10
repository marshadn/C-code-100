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
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
    {
        cout << num << " is an Armstrong number." << endl;
    }
    else
    {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
