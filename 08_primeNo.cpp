#include <iostream>
using namespace std;
int main()
{
    bool isPrime = true;
    int num;
    cin >> num;
    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << num << " is Prime";
    }
    else
    {
        cout << num << " is not Prime";
    }
    return 0;
}