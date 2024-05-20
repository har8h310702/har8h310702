#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    if (s1 == s2)
    {
        cout << "Strings are equal";
    }
    else
    {
        cout << "Strings are not equal";
    }
    return 0;
}