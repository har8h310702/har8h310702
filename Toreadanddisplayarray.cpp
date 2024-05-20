#include <iostream>
using namespace std;
int main()
{
    int arr[2][2][2], i, j, k;
    cout << "Enter the array elements : \n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                cin >> arr[i][j][k];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                cout << "Element at position (" << i << "," << j << "," << k << "): " << arr[i][j][k] << "\n";
        }
    }
    return 0;
}