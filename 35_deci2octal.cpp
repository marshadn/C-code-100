#include <iostream>
#include <string>

std::string decToOctal(int decimal)
{
    if (decimal == 0)
    {
        return "0";
    }

    std::string octal = "";

    while (decimal > 0)
    {
        octal = std::to_string(decimal % 8) + octal;
        decimal /= 8;
    }

    return octal;
}

int main()
{
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::string octalNumber = decToOctal(decimalNumber);

    std::cout << "The octal equivalent is: " << octalNumber << std::endl;

    return 0;
}
/*
Sure! Below is a simple C++ program that converts a decimal number (as an integer) to an octal number (as a string):

cpp
Copy code
#include <iostream>
#include <string>

std::string decToOctal(int decimal) {
    if (decimal == 0) {
        return "0";
    }

    std::string octal = "";

    while (decimal > 0) {
        octal = std::to_string(decimal % 8) + octal;
        decimal /= 8;
    }

    return octal;
}

int main() {
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::string octalNumber = decToOctal(decimalNumber);

    std::cout << "The octal equivalent is: " << octalNumber << std::endl;

    return 0;
}
How the Code Works:
Input Handling: The program asks the user to enter a decimal number.
Conversion Function: The decToOctal function converts the decimal integer to an octal string:
It repeatedly divides the decimal number by 8.
It prepends the remainder (0 through 7) to the octal string.
This process continues until the decimal number becomes 0.
Output: Finally, the program outputs the octal equivalent of the entered decimal number.
Example Usage:
If the user enters 83, the program will output 123 as the octal equivalent.*/