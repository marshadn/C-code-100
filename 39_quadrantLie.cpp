#include <iostream>

using namespace std;

void findQuadrant(int x, int y)
{
    if (x > 0 && y > 0)
    {
        cout << "The point (" << x << ", " << y << ") lies in the First quadrant." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point (" << x << ", " << y << ") lies in the Second quadrant." << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point (" << x << ", " << y << ") lies in the Third quadrant." << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point (" << x << ", " << y << ") lies in the Fourth quadrant." << endl;
    }
    else if (x == 0 && y != 0)
    {
        cout << "The point (" << x << ", " << y << ") lies on the y-axis." << endl;
    }
    else if (x != 0 && y == 0)
    {
        cout << "The point (" << x << ", " << y << ") lies on the x-axis." << endl;
    }
    else
    {
        cout << "The point (" << x << ", " << y << ") is the origin." << endl;
    }
}

int main()
{
    int x, y;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;

    findQuadrant(x, y);

    return 0;
}
