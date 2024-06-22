#include <iostream>

using namespace std;

// Function to check if a given year is a leap year
bool isLeapYear(int year)
{
    // Leap year is divisible by 4, except for years divisible by 100, unless they are divisible by 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month of a year
int getNumberOfDaysInMonth(int month, int year)
{
    switch (month)
    {
    case 1:  // January
    case 3:  // March
    case 5:  // May
    case 7:  // July
    case 8:  // August
    case 10: // October
    case 12: // December
        return 31;
    case 4:  // April
    case 6:  // June
    case 9:  // September
    case 11: // November
        return 30;
    case 2: // February
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1; // Invalid month
    }
}

int main()
{
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (month < 1 || month > 12)
    {
        cout << "Invalid month entered." << endl;
        return 1;
    }

    int days = getNumberOfDaysInMonth(month, year);
    if (days == -1)
    {
        cout << "Invalid month entered." << endl;
    }
    else
    {
        cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;
    }

    return 0;
}
