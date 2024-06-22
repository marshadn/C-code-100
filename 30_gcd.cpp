#include<iostream>
using namespace std;

// Using Euclidean Algorithm (Repeated Subtraction)
int main()
{
    int n1 = 104, n2 = 24, gcd = 1;
    
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    
    cout<<"The GCD : "<<n1;
    
    return 0;
}