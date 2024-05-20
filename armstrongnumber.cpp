#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, temp, dig = 0, d = 0, sum = 0, t;
    cout << "Enter the number: " << endl;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        dig++;
        temp = temp / 10;
    }
    t = num;
    while (num != 0)
    {
        d = num % 10;
        sum = sum + pow(d, dig);
        num = num / 10;
    }
    if (sum == t)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an armstrong number";
    }
    return 0;
}