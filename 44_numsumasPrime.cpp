// Can a number be expressed as a sum of two prime numbers
#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    if (num % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to check if a number can be expressed as the sum of two primes
bool canExpressAsSumOfTwoPrimes(int n)
{
    for (int i = 2; i <= n / 2; ++i)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter a number greater than 2: ";
    cin >> n;

    if (n <= 2)
    {
        cout << "Please enter a number greater than 2." << endl;
        return 1;
    }

    if (canExpressAsSumOfTwoPrimes(n))
    {
        cout << "Yes, " << n << " can be expressed as the sum of two prime numbers." << endl;
    }
    else
    {
        cout << "No, " << n << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
IsPrime Function:
Checks if a number num is prime using basic primality tests.
CanExpressAsSumOfTwoPrimes Function:
Iterates through numbers from 2 up to n/2.
Checks if both i and (n - i) are prime.
Returns true if such prime pairs are found; otherwise, returns false.
Main Function:
Prompts the user to enter a number greater than 2.
Calls canExpressAsSumOfTwoPrimes to check if the number can be expressed as the sum of two prime numbers.
Outputs the result accordingly.
Example Usage:
If the user enters 28, the program will output "Yes, 28 can be expressed as the sum of two prime numbers.", as

28=5+23 (both 5 and 23 are prime).

This program leverages basic number theory concepts and primality testing to determine if a number can be expressed as the sum of two primes, adhering to Goldbach's conjecture for even numbers greater than 2.

*/