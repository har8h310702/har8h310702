#include <iostream>
using namespace std;
int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}
void simplifyRational(int &n, int &d)
{
    int gcd = findGCD(n, d);
    n /= gcd;
    d /= gcd;
}
int main()
{
    int n, d;
    cout << "Enter the numerator: ";
    cin >> n;
    cout << "Enter the denominator: ";
    cin >> d;
    if (d == 0)
    {
        cout << "Error: Denominator cannot be zero." << endl;
        return 1;
    }
    simplifyRational(n, d);
    cout << "Simplified rational number: " << n << "/" << d << endl;
    return 0;
}