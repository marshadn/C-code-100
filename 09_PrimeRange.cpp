#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int lower, upper;
    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: ";

    for (int num = lower; num <= upper; num++)
    {
        if (isPrime(num))
        {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
