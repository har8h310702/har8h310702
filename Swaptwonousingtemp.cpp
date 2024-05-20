#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter number 1 : ";
    cin >> a;
    cout << "Enter number 2 : ";
    cin >> b;
    cout << "before swapping a = " << a << " & b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "after swapping a = " << a << " & b = " << b << endl;
    return 0;
}