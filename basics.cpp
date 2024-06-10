#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// int main()
// {

// string str;
// cout << "Enter your name :";
// // getline(cin, str);
// cin >> str;
// cout << "Your name is " << str;

// cout << "Max is :"
//      << max(43, 56) << endl;
// cout << "min is :"
//      << min(43, 56);

// cout << "The sqrt is  " << sqrt(81) << endl;
// cout << "The round  is  " << round(4.8) << endl;
// cout << "The logarithm  is  " << log(10) << endl;

// int myNumbers[5] = {10, 20, 30, 40, 50};
// cout << sizeof(myNumbers) << endl;
// int getArrayLength = sizeof(myNumbers) / sizeof(int);
// cout << getArrayLength;

// int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i : myNumbers)
// {
//     cout << i << "\n";
// }

// Create a structure variable called myStructure
// struct
// {
//     int myNum;
//     string myString;
// } myStructure;

// // Assign values to members of myStructure
// myStructure.myNum = 1;
// myStructure.myString = "Hello World!";

// // Print members of myStructure
// cout << myStructure.myNum << "\n";
// cout << myStructure.myString << "\n";

// struct
// {
//     string brand;
//     string model;
//     int year;
// } myCar1, myCar2; // We can add variables by separating them with a comma here

// // Put data into the first structure
// myCar1.brand = "BMW";
// myCar1.model = "X5";
// myCar1.year = 1999;

// // Put data into the second structure
// myCar2.brand = "Ford";
// myCar2.model = "Mustang";
// myCar2.year = 1969;

// // Print the structure members
// cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
// cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

// string food = "Pizza";
// string *ptr = &food;
// string &meal = food;

// cout << food << "\n";  // Outputs Pizza
// cout << meal << "\n";  // Outputs Pizza
// cout << &food << "\n"; // Outputs Pizza
// cout << ptr << "\n";
// cout << *ptr << "\n";

// void swapNums(int &x, int &y)
// {
//     int z = x;
//     x = y;
//     y = z;
// }

// using namespace std;
// int main()
// {

//     int firstNum = 10;
//     int secondNum = 20;

//     cout << "Before swap: "
//          << "\n";
//     cout << firstNum << secondNum << "\n";

//     // Call the function, which will change the values of firstNum and secondNum
//     swapNums(firstNum, secondNum);

//     cout << "After swap: "
//          << "\n";
//     cout << firstNum << secondNum << "\n";

//     return 0;
// }

// using namespace std;
// int plusFunc(int x, int y)
// {
//     return x + y;
// }

// double plusFunc(double x, double y)
// {
//     return x + y;
// }

// int main()
// {
//     int myNum1 = plusFunc(8, 5);
//     double myNum2 = plusFunc(4.3, 6.26);
//     cout << "Int: " << myNum1 << "\n";
//     cout << "Double: " << myNum2;
//     return 0;
// }

// using namespace std;
// int sum(int k)
// {
//     if (k > 0)
//     {
//         return k + sum(k - 1);
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int result = sum(10);
//     cout << result;
//     return 0;
// }

// basic class defining
// class MyClass
// {
// public:
//     int myNum;
//     string myString;
// };
// int main()
// {
//     MyClass myObj; // Create an object of MyClass

//     // Access attributes and set values
//     myObj.myNum = 15;
//     myObj.myString = "Some text";

//     // Print attribute values
//     cout << myObj.myNum << "\n";
//     cout << myObj.myString;
//     return 0;
// }

// class MyCar
// {
// public:
//     string brand;
//     string name;
//     int year;
// };

// int main()
// {

//     MyCar car1;
//     car1.brand = "BMW";
//     car1.name = "X5";
//     car1.year = 1998;

//     MyCar car2;
//     car2.brand = "Mercedez";
//     car2.name = "S-Class";
//     car2.year = 2000;

//     cout << car1.brand << " " << car1.name << " " << car1.year << endl;
//     cout << car2.brand << " " << car2.name << " " << car2.year << endl;
//     return 0;
// }
// class MyClass
// {
// public:
//     int mySum(int x, int y)
//     {
//         cout << "Multiple of " << x << " and " << y << " is :";
//         return x * y;
//     }
// };
// int main()
// {
//     MyClass obj;
//     int z = obj.mySum(4, 7);
//     cout << z;
// }

// class Thenga
// {
// public:
//     void printName();
// };

// void Thenga::printName()
// {
//     cout << "Hi this predictable";
// }

// int main()
// {
//     Thenga obj;
//     obj.printName();
//     return 0;
// }

// class Car
// {                 // The class
// public:           // Access specifier
//     string brand; // Attribute
//     string model; // Attribute
//     int year;     // Attribute
//     Car(string x, string y, int z)
//     { // Constructor with parameters
//         brand = x;
//         model = y;
//         year = z;
//     }
// };

// int main()
// {
//     // Create Car objects and call the constructor with different values
//     Car carObj1("BMW", "X5", 1999);
//     Car carObj2("Ford", "Mustang", 1969);

//     // Print values
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//     return 0;
// }

class Car
{                                   // The class
public:                             // Access specifier
    string brand;                   // Attribute
    string model;                   // Attribute
    int year;                       // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}