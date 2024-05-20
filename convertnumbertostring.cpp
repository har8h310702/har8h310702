#include <iostream>
using namespace std;
int main()
{
    int n, rem = 0, sum = 0, r = 0;
    cout << "Enter number: ";
    cin >> n;
    int temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    while (sum != 0)
    {
        rem = sum % 10;
        switch (rem)
        {
        case 1:
            cout << "ONE ";
            break;
        case 2:
            cout << "TWO ";
            break;
        case 3:
            cout << "THREE ";
            break;
        case 4:
            cout << "FOUR ";
            break;
        case 5:
            cout << "FIVE ";
            break;
        case 6:
            cout << "SIX ";
            break;
        case 7:
            cout << "SEVEN ";
            break;
        case 8:
            cout << "EIGHT ";
            break;
        case 9:
            cout << "NINE ";
            break;
        case 0:
            cout << "ZERO ";
            break;
        
        }
         sum = sum / 10;
    }      
        return 0;
}