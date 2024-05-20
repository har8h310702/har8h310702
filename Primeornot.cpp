#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter the number : ";
    cin >> num;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a Prime number";
    }
    return 0;
}