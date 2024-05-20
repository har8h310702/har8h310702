#include <iostream>
using namespace std;

int main()
{
    int arr2[5], arr1[5], arr3[10], i;
    cout << "Enter 5 elements of first array : ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter 5 elements of second array : ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }
    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }
    for (i = 0; i < 5; i++)
    {
        arr3[i + 5] = arr2[i];
    }
    cout << "The merged array will be : \n";
    for (i = 0; i < 10; i++)
    {
        cout << arr3[i] << '\t';
    }
    return 0;
}