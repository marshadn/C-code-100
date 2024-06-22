#include <iostream>
#include <string>

using namespace std;

// Function to count occurrences of a digit x in a given number as string
int countDigitOccurrences(int number, int x)
{
    // Convert number to string
    string numStr = to_string(number);

    // Initialize count of occurrences
    int count = 0;

    // Iterate through each character in the string
    for (char c : numStr)
    {
        if (c == (x + '0'))
        { // Convert x to character and compare with current character
            count++;
        }
    }

    return count;
}

int main()
{
    int number, x;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit (0-9) you want to count: ";
    cin >> x;

    if (x < 0 || x > 9)
    {
        cout << "Invalid digit entered." << endl;
        return 1;
    }

    int occurrences = countDigitOccurrences(number, x);
    cout << "Digit " << x << " occurs " << occurrences << " times in the number " << number << "." << endl;

    return 0;
}
/*Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
CountDigitOccurrences Function:
Converts the number to a string using to_string.
Initializes a count variable to store the number of occurrences of digit
𝑥
x.
Iterates through each character in the string representation of number.
Compares each character with the digit
𝑥
x (converted to its character form).
Increments the count if the character matches
𝑥
x.
Returns the count of occurrences.
Main Function:
Prompts the user to enter a number and the digit
𝑥
x they want to count.
Checks if
𝑥
x is a valid digit (0-9).
Calls countDigitOccurrences to compute the number of times
𝑥
x occurs in number.
Outputs the result.
Example Usage:
If the user enters 121212 for the number and 1 for
𝑥
x, the program will output "Digit 1 occurs 3 times in the number 121212.".
If the user enters 12345 for the number and 9 for
𝑥
x, the program will output "Digit 9 occurs 0 times in the number 12345.".
This program efficiently counts occurrences of a specific digit
𝑥
x in a given number by converting it to a string and iterating through each character, ensuring accurate and straightforward counting.
*/