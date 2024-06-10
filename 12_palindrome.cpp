#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int rev = 0;
    int originalNum = num;
    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (originalNum == rev)
    {
        cout << originalNum << " Is Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}