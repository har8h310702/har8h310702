#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, item, index = -1;
    cout << "Enter the array of items: ";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the item: ";
    cin >> item;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == item)
        {
            index = i;
        }
    }
    if (index == -1)
    {
        cout << "Item not found";
    }
    else
    {
        cout << "Item found at " << index << " index";
    }
    return 0;
}