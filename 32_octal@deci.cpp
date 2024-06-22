#include <iostream>
using namespace std;

int main()
{
    // important input has to be in string format only here
    string binaryNumber;
    cin >> binaryNumber;

    int base = 8;
    // format stoi(binary_in_string_format, 0, base_value)
    cout << stoi(binaryNumber, 0, base);

    return 0;
}