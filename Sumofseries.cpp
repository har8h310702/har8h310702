#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1, sum = 0;
    cout << "The series is 1/1 + 2*2/2 + 3*3*3/3------" << endl;
    cout << "upto how many terms you have to find the sum of the series : ";
    cin >> num1;
    for (int i = 1; i < num1; i++)
    {
        sum = sum + pow(i, i) / i;
    }
    cout << sum;
    return 0;
}
