#include <iostream>
using namespace std;

int main()
{
    int i;
    char j;
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}