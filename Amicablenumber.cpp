#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, sum1 = 0, sum2 = 0;
    cout << "Enter number 1 = " << endl;
    cin >> n1;
    cout << "Enter number 2 = " << endl;
    cin >> n2;
    for (i = 1; i <= n1 / 2; i++)
    {
        if (n1 % i == 0)
        {
            sum1 = sum1 + i;
        }
    }
    for ( i = 1; i <= n2 / 2; i++)
    {
        if (n2 % i == 0)
        {
            sum2 = sum2 + i;
        }
    }
    if (sum1 == n2 & sum2 == n1)
    {
        cout << "This is an amicable number";
    }
    else
    {
        cout << "This is not an amicable number";
    }
    return 0;
}