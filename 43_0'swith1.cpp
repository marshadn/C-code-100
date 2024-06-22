// Replace all 0’s with 1 in a given integer
#include <iostream>
#include <string>

using namespace std;

int replaceZerosWithOnes(int num)
{
    // Convert integer to string
    string numStr = to_string(num);

    // Replace '0' with '1' in the string
    for (char &c : numStr)
    {
        if (c == '0')
        {
            c = '1';
        }
    }

    // Convert string back to integer
    return stoi(numStr);
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int replacedNum = replaceZerosWithOnes(num);

    cout << "After replacing all 0's with 1's, the integer is: " << replacedNum << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
ReplaceZerosWithOnes Function:
Converts the integer num to its string representation using to_string.
Iterates through each character in the string and replaces '0' with '1'.
Converts the modified string back to an integer using stoi.
Main Function:
Prompts the user to enter an integer.
Calls replaceZerosWithOnes to perform the replacement.
Outputs the modified integer.
Example Usage:
If the user enters 102030, the program will output 112131, as all '0's have been replaced with '1's in the integer.

This method leverages string manipulation to achieve the desired result efficiently.

*/