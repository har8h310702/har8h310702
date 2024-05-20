#include <iostream>
using namespace std;
int main()
{
    int day, mon, yr, size;
    cout << "Enter day, month and  year: ";
    cin >> day >> mon >> yr;
    switch (mon)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        size = 31;
        break;
    case 2:
        if (yr % 400 == 0 || yr % 100 != 0 && yr % 4 == 0)
            size = 29;
        else
            size = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        size = 30;
        break;
    }
    if (day < size)
        day++;
    else
    {
        day = 1;
        if (mon == 12)
        {
            mon = 1;
            yr++;
        }
        else
            mon++;
    }
    cout << "Next date is : " << endl;
    cout << "Day: " << day << " Month: " << mon << " Year: " << yr;
    return 0;
}