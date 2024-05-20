#include <iostream>
using namespace std;

int largest(int a[10])
{
    int i, pos = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] > a[pos])

            pos = i;
    }
    return pos;
}
int smallest(int a[10])
{
    int i, pos = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] < a[pos])
            pos = i;
    }
    return pos;
}

int main()
{
    int arr[10], i, j, k;
    cout << "Enter the 10 elements of array : ";
    for (i = 0; i < 10; i++)

        cin >> arr[i];

    cout << "Before interchanging smallest and largest number the array is : \n";
    for (i = 0; i < 10; i++)

        cout << arr[i] << "\t";

    j = largest(arr);
    k = smallest(arr);
    arr[j] = arr[j] + arr[k];
    arr[k] = arr[j] - arr[k];
    arr[j] = arr[j] - arr[k];
    cout << "\nAfter interchanging smallest and largest number the array is : \n";
    for (i = 0; i < 10; i++)

        cout << arr[i] << "\t";
    return 0;
}