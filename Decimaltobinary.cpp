#include <iostream>
using namespace std;

int main()
{
    int n, i=0, a[10];
    cout << "Enter a number : ";
    cin >> n;
    while (n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "The binary equalient no. is : ";
    for (i = i - 1; i > 0; i--)
    {
        cout << a[i];
    }
    return 0;
}