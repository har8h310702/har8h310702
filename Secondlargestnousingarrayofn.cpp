#include <iostream>
using namespace std;

int main()
{
    int n, i, second_highest, highest;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n < 2)
    {
        cout << "Enter at least two elements to find second highest";
        return 1;
    }
    int arr[n];
    cout << "Enter " << n << " elements of array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    second_highest = arr[0];
    highest = arr[1];
    if (second_highest > highest)
    {
        second_highest = second_highest + highest;
        highest = second_highest - highest;
        second_highest = second_highest - highest;
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] > highest)
        {
            second_highest = highest;
            highest = arr[i];
        }
    }
    cout << "The second highest number of the array is : " << second_highest;
    return 0;
}