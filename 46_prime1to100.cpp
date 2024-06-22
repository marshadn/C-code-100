// Find the prime numbers between 1 to 100
#include <iostream>
#include <vector>

using namespace std;

// Function to find all prime numbers up to n using Sieve of Eratosthenes
vector<int> sieveOfEratosthenes(int n)
{
    // Initialize a boolean array "prime[0..n]" and set all entries to true.
    // A value in prime[i] will finally be false if i is Not a prime, else true.
    vector<bool> prime(n + 1, true);
    vector<int> primes;

    for (int p = 2; p * p <= n; ++p)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Updating all multiples of p to not prime
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    // Collecting all prime numbers
    for (int p = 2; p <= n; ++p)
    {
        if (prime[p])
        {
            primes.push_back(p);
        }
    }

    return primes;
}

int main()
{
    int n = 100;
    vector<int> primes = sieveOfEratosthenes(n);

    cout << "Prime numbers between 1 to " << n << " are: ";
    for (int prime : primes)
    {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
SieveOfEratosthenes Function:
Creates a boolean vector prime where prime[i] will be true if i is a prime number.
Initializes all entries of prime as true, except for 0 and 1.
Starts with the first prime number (2) and marks all of its multiples (except itself) as false.
Continues this process for subsequent numbers, marking their multiples as false.
Collects all numbers which are still marked as true (primes) into the primes vector.
Main Function:
Calls sieveOfEratosthenes with n = 100 to find all prime numbers up to 100.
Prints out the list of prime numbers found.
Example Output:
When you run the program, it will output:

Prime numbers between 1 to 100 are: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53
59 61 67 71 73 79 83 89 97
These are the prime numbers between 1 to 100, as determined by the Sieve of Eratosthenes algorithm. Each number in the list is prime and does not have any divisors other than 1 and itself.
*/