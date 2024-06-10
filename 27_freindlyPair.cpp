#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumOfProperDivisors(int num)
{
    int sum = 1;
    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

bool isFriendlyPair(int num1, int num2)
{
    return sumOfProperDivisors(num1) == num2 && sumOfProperDivisors(num2) == num1;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (isFriendlyPair(num1, num2))
        cout << num1 << " and " << num2 << " form a friendly pair." << endl;
    else
        cout << num1 << " and " << num2 << " do not form a friendly pair." << endl;

    return 0;
}
