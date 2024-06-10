#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << n << " is Positive" << endl;
    }
    else if (n < 0)
    {
        cout << n << " is Negative" << endl;
    }
    else
    {
        cout << n << " is Zero\n";
    }
}