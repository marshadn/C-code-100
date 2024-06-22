// Addition of two fractions
#include <iostream>

using namespace std;

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// Function to add two fractions and simplify the result
void addFractions(int num1, int den1, int num2, int den2, int &numResult, int &denResult)
{
    // Find the common denominator
    denResult = den1 * den2;

    // Convert fractions to have the common denominator
    numResult = (num1 * den2) + (num2 * den1);

    // Simplify the fraction by dividing by the GCD of the numerator and denominator
    int commonDivisor = gcd(numResult, denResult);
    numResult /= commonDivisor;
    denResult /= commonDivisor;
}

int main()
{
    int num1, den1, num2, den2;
    cout << "Enter the numerator and denominator of the first fraction: ";
    cin >> num1 >> den1;
    cout << "Enter the numerator and denominator of the second fraction: ";
    cin >> num2 >> den2;

    // Check for invalid input
    if (den1 == 0 || den2 == 0)
    {
        cout << "Denominator cannot be zero." << endl;
        return 1;
    }

    int numResult, denResult;
    addFractions(num1, den1, num2, den2, numResult, denResult);

    cout << "The result of the addition is: " << numResult << "/" << denResult << endl;

    return 0;
}
/*How the Code Works:
Namespace: The using namespace std; directive is used to avoid prefixing standard library components with std::.
GCD Function: The gcd function calculates the greatest common divisor of two numbers using the Euclidean algorithm. This is used to simplify the resulting fraction.
AddFractions Function:
The addFractions function takes the numerators and denominators of two fractions as input and calculates the sum.
It finds a common denominator by multiplying the denominators of the two fractions.
It converts the fractions to have this common denominator and adds their numerators.
It then simplifies the resulting fraction by dividing the numerator and denominator by their greatest common divisor.
Input and Output: The program asks the user to enter the numerators and denominators of the two fractions. It then calculates the sum using the addFractions function and outputs the simplified result.*/