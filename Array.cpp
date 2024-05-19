#include <iostream>
using namespace std;
int main()
{
    //     int a[5];
    //     cout<<"Enter the value of a : ";
    //     for ( int i = 0; i < 5; i++)
    //     {
    //         cin>>a[i];
    //     }
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout<<a[i];
    //     }
    //     return 0;



    // Traversal of array.
    int a[50], size, i;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Array elements are: \n";
    for (i = 0; i < size; i++)
    {
        cout << a[i];
    }
    return 0;
}
