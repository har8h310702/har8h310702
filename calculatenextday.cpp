#include <iostream>
using namespace std;
int main()
{
    int day, month, year, temp = 0, monthDays;
    cout << "Enter the date (dd mm yyyy): " << endl;
    cin >> day >> month >> year;

    day++;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    
        temp = 1;
        int days[] = {31,
                      28,
                      31,
                      30,
                      31,
                      30,
                      31,
                      31,
                      30,
                      31,
                      30,
                      31};

        if (month == 2)
        
            days[1] = 29;
            monthDays = days[month - 1];
        

        if (day > monthDays)
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }

        cout << "The next day is " << day << "-" << month << "-" << (year % 100);
        return 0;
    }