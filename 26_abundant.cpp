#include <iostream>
using namespace std;

int sumOfProperDivisors(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

bool isAbundant(int num)
{
    return sumOfProperDivisors(num) > num;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAbundant(num))
        cout << num << " is an abundant number." << endl;
    else
        cout << num << " is not an abundant number." << endl;

    return 0;
}
