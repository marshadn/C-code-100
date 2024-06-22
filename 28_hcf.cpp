// C++ program to find HCF of two numbers
#include <iostream>

using namespace std;

int findHCF(int, int);

int main()
{
    int num1 = 36, num2 = 60;

    cout << "HCF of " << num1 << " and " << num2 << " is " << findHCF(num1, num2);

    return 0;
}

// Recursive function to return HCF of a and b int
int findHCF(int num1, int num2)
{
    // Everything divides 0
    if (num1 == 0 || num2 == 0)
    {
        return (num1 + num2);
    }

    // base case
    if (num1 == num2)
    {
        return num1;
    }

    // num1 > num2
    if (num1 > num2)
    {
        return findHCF(num1 - num2, num2);
    }
    else
    {
        return findHCF(num1, num2 - num1);
    }
}