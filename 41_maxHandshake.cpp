// Maximum number of handshakes
#include <iostream>

using namespace std;

// Function to calculate the number of handshakes
int maxHandshakes(int n)
{
    return (n * (n - 1)) / 2;
}

int main()
{
    int n;
    cout << "Enter the number of people: ";
    cin >> n;

    int handshakes = maxHandshakes(n);
    cout << "The maximum number of handshakes possible is: " << handshakes << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
MaxHandshakes Function: The maxHandshakes function calculates the number of handshakes using the combination formula
Input and Output: The program asks the user to enter the number of people
𝑛
n and then calculates the maximum number of handshakes using the maxHandshakes function. It then outputs the result.*/