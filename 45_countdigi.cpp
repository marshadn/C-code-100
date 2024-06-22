// Count possible decoding of a given digit sequence
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to count possible decodings
int countDecodings(const string &digits)
{
    int n = digits.size();

    // Edge case: if the sequence is empty or starts with '0', no valid decoding
    if (n == 0 || digits[0] == '0')
    {
        return 0;
    }

    // Create a dp array to store number of ways to decode up to i-th index
    vector<int> dp(n + 1, 0);

    // Base cases
    dp[0] = 1; // 1 way to decode empty sequence
    dp[1] = 1; // 1 way to decode single digit (excluding '0' handled above)

    for (int i = 2; i <= n; ++i)
    {
        // Single digit decoding
        if (digits[i - 1] != '0')
        {
            dp[i] += dp[i - 1];
        }

        // Two digit decoding
        int twoDigit = stoi(digits.substr(i - 2, 2));
        if (twoDigit >= 10 && twoDigit <= 26)
        {
            dp[i] += dp[i - 2];
        }
    }

    return dp[n];
}

int main()
{
    string digits;
    cout << "Enter a digit sequence: ";
    cin >> digits;

    int numDecodings = countDecodings(digits);
    cout << "Number of possible decodings: " << numDecodings << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
CountDecodings Function:
Initializes a dynamic programming (DP) array dp where dp[i] represents the number of ways to decode the sequence up to index i.
Handles edge cases where the sequence is empty or starts with '0', which means no valid decoding is possible.
Uses a bottom-up approach to fill the dp array:
If the current digit is not '0', it can be decoded individually.
Checks if the last two digits form a valid two-digit number (between 10 and 26 inclusive), in which case it can be decoded as a pair.
Returns dp[n], where n is the length of the digit sequence, representing the total number of possible decodings.
Main Function:
Prompts the user to enter a digit sequence.
Calls countDecodings to compute the number of possible decodings.
Outputs the result.
Example Usage:
If the user enters "226", the program will output "Number of possible decodings: 3", indicating there are three possible decodings: "BBF", "BZ", and "VF".

This program efficiently counts the number of ways to decode a given digit sequence using dynamic programming, ensuring optimal performance for longer sequences of digits.
*/