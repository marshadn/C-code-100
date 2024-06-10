#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        unsigned long long fact = 1;
        for (int i = 2; i <= n; ++i)
        {
            fact *= i;
        }
        return fact;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
