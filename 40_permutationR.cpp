// Permutations in which n people can occupy r seats in a classroom

#include <iostream>

using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

// Function to calculate permutations P(n, r)
unsigned long long permutations(int n, int r)
{
    if (r > n)
    {
        return 0; // If r is greater than n, it's not possible
    }
    return factorial(n) / factorial(n - r);
}

int main()
{
    int n, r;
    cout << "Enter the number of people (n): ";
    cin >> n;
    cout << "Enter the number of seats (r): ";
    cin >> r;

    unsigned long long result = permutations(n, r);
    cout << "The number of permutations in which " << n << " people can occupy " << r << " seats is: " << result << endl;

    return 0;
}

