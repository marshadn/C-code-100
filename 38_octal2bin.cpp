#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Function to convert an octal string to a binary string
string octalToBin(const string &octal)
{
    // Mapping of octal digits to their corresponding binary representation
    unordered_map<char, string> octalToBinaryMap = {
        {'0', "000"},
        {'1', "001"},
        {'2', "010"},
        {'3', "011"},
        {'4', "100"},
        {'5', "101"},
        {'6', "110"},
        {'7', "111"}};

    string binary = "";

    // Convert each octal digit to its binary equivalent
    for (char octDigit : octal)
    {
        binary += octalToBinaryMap[octDigit];
    }

    // Remove leading zeros from the binary string
    binary.erase(0, binary.find_first_not_of('0'));
    if (binary.empty())
    {
        binary = "0";
    }

    return binary;
}

int main()
{
    string octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;

    string binaryNumber = octalToBin(octalNumber);

    cout << "The binary equivalent is: " << binaryNumber << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
Mapping: An unordered map (unordered_map) is used to map each octal digit ('0' to '7') to its corresponding 3-bit binary string.
Conversion: The program iterates over each character in the octal string and appends the corresponding binary string from the map to the result.
Leading Zero Removal: Leading zeros are removed from the resulting binary string. If the binary string becomes empty after this removal, it is set to "0".
Input and Output: The program asks the user to enter an octal number and then outputs the corresponding binary number.
Example Usage:
If the user enters 123, the program will output 1010011 as the binary equivalent.
*/