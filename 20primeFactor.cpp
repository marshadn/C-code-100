#include <iostream>
#include <vector>
using namespace std;

vector<int> findPrimeFactors(int num)
{
    vector<int> primeFactors;
    for (int i = 2; i * i <= num; ++i)
    {
        while (num % i == 0)
        {
            primeFactors.push_back(i);
            num /= i;
        }
    }
    if (num > 1)
    {
        primeFactors.push_back(num);
    }
    return primeFactors;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    vector<int> primeFactors = findPrimeFactors(num);

    cout << "Prime factors of " << num << " are: ";
    for (int factor : primeFactors)
    {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
