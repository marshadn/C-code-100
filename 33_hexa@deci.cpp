#include <iostream>
#include <string>
#include <cmath>

int hexToDec(const std::string &hex)
{
    int decimal = 0;
    int base = 1; // 16^0

    int len = hex.length();

    // Iterate over each character in the hexadecimal string
    for (int i = len - 1; i >= 0; --i)
    {
        char hexDigit = hex[i];

        if (hexDigit >= '0' && hexDigit <= '9')
        {
            decimal += (hexDigit - '0') * base;
        }
        else if (hexDigit >= 'A' && hexDigit <= 'F')
        {
            decimal += (hexDigit - 'A' + 10) * base;
        }
        else if (hexDigit >= 'a' && hexDigit <= 'f')
        {
            decimal += (hexDigit - 'a' + 10) * base;
        }

        base *= 16; // Increase the base (16^1, 16^2, 16^3, ...)
    }

    return decimal;
}

int main()
{
    std::string hexNumber;
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> hexNumber;

    int decimalNumber = hexToDec(hexNumber);

    std::cout << "The decimal equivalent is: " << decimalNumber << std::endl;

    return 0;
}
/*
How the Code Works:
Input Handling: The program asks the user to enter a hexadecimal number.
Conversion Function: The hexToDec function converts the hexadecimal string to a decimal integer:
It starts from the rightmost digit (least significant digit) and moves to the left.
It multiplies each digit by the corresponding power of 16.
It adds the result to the total decimal value.
Output: Finally, the program outputs the decimal equivalent of the entered hexadecimal number.
Example Usage:
If the user enters 1A3, the program will output 419 as the decimal equivalent.
*/