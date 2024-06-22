#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to convert a binary string to an octal string
string binToOctal(const string &binary)
{
    int len = binary.length();

    // Pad the binary string with leading zeros to make its length a multiple of 3
    int padding = (3 - len % 3) % 3;
    string paddedBinary = string(padding, '0') + binary;

    string octal = "";
    for (size_t i = 0; i < paddedBinary.length(); i += 3)
    {
        string binGroup = paddedBinary.substr(i, 3);

        int octalDigit = (binGroup[0] - '0') * 4 + (binGroup[1] - '0') * 2 + (binGroup[2] - '0');
        octal += to_string(octalDigit);
    }

    // Remove leading zeros from the octal string
    while (octal[0] == '0' && octal.length() > 1)
    {
        octal.erase(0, 1);
    }

    return octal;
}

int main()
{
    string binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    string octalNumber = binToOctal(binaryNumber);

    cout << "The octal equivalent is: " << octalNumber << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
Padding: The binary string is padded with leading zeros to ensure its length is a multiple of 3. This makes grouping the binary digits easier.
Grouping and Conversion: The binary string is processed in groups of three digits. Each group is converted to its corresponding octal digit by evaluating the binary value of the group.
Leading Zero Removal: Any leading zeros in the resulting octal string are removed, unless the octal string is just "0".
Input and Output: The program asks the user to enter a binary number and then outputs the corresponding octal number.
Example Usage:
If the user enters 11011, the program will output 33 as the octal equivalent.
*/