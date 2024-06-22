#include <iostream>
#include <string>

using namespace std;

string decToHex(int decimal)
{
    if (decimal == 0)
    {
        return "0";
    }

    string hex = "";
    const string hexDigits = "0123456789ABCDEF";

    while (decimal > 0)
    {
        int remainder = decimal % 16;
        hex = hexDigits[remainder] + hex;
        decimal /= 16;
    }

    return hex;
}

int main()
{
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    string hexNumber = decToHex(decimalNumber);

    cout << "The hexadecimal equivalent is: " << hexNumber << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
Input Handling: The program asks the user to enter a decimal number.
Conversion Function: The decToHex function converts the decimal integer to a hexadecimal string:
It repeatedly divides the decimal number by 16.
It uses the remainder to index into a string of hexadecimal digits ("0123456789ABCDEF") to get the corresponding hex digit.
It prepends the hex digit to the hex string.
This process continues until the decimal number becomes 0.
Output: Finally, the program outputs the hexadecimal equivalent of the entered decimal number.
Example Usage:
If the user enters 255, the program will output FF as the hexadecimal equivalent.
*/