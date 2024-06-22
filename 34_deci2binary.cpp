#include <iostream>
#include <string>

std::string decToBin(int decimal)
{
    if (decimal == 0)
    {
        return "0";
    }

    std::string binary = "";

    while (decimal > 0)
    {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }

    return binary;
}

int main()
{
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::string binaryNumber = decToBin(decimalNumber);

    std::cout << "The binary equivalent is: " << binaryNumber << std::endl;

    return 0;
}
/*How the Code Works:
Input Handling: The program asks the user to enter a decimal number.
Conversion Function: The decToBin function converts the decimal integer to a binary string:
It repeatedly divides the decimal number by 2.
It prepends the remainder (0 or 1) to the binary string.
This process continues until the decimal number becomes 0.
Output: Finally, the program outputs the binary equivalent of the entered decimal number.
Example Usage:
If the user enters 13, the program will output 1101 as the binary equivalent.
*/