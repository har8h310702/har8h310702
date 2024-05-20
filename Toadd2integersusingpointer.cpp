#include <iostream>
using namespace std;
int main()
{
    int a, b, *p1 = &a, *p2 = &b;
    cout << "Enter the value of a & b : ";
    cin >> a >> b;
    cout << "The sum is : " << *p1 + *p2;
    return 0;
}