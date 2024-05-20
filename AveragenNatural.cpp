#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    double average = sum / n;
    cout << "The average of first " << n << " natural numbers is : " << average << endl;
    return 0;
}