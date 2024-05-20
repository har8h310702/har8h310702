#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year : ";
    cin >> year;

    bool isLeapyear = false;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        isLeapyear = true;
    }

    if (isLeapyear)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}