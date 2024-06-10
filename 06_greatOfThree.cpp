#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y && x > z)
    {
        cout << x << " is Largest" << endl;
    }
    else if (y > z && y > x)
    {
        cout << y << " is Largest";
    }
    else
    {
        cout << z << " is Largest";
    }
    return 0;
}
