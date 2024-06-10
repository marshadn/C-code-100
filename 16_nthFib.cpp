#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int first = 0, second = 1, next;

    if (n == 0)
        return first;
    else if (n == 1)
        return second;
    else
    {
        for (int i = 2; i <= n; ++i)
        {
            next = first + second;
            first = second;
            second = next;
        }
        return next;
    }
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "The " << n << "th term of the Fibonacci series is: " << fibonacci(n) << endl;

    return 0;
}
