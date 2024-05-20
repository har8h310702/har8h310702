#include <iostream>
using namespace std;
class DynamicArray
{
private:
    int *arr;
    int size;

public:
    DynamicArray(int s)
    {
        size = s;
        arr = new int[size];
    }
    ~DynamicArray()
    {
        delete[] arr;
    }
    void inputElements()
    {
        cout << "Enter " << size << " elements into the array: " << endl;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    int findLargest()
    {
        int largest = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > largest)
                largest = arr[i];
        }
        return largest;
    }
};
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid array size." << endl;
        return 1;
    }
    DynamicArray dynArray(size);
    dynArray.inputElements();
    int largest = dynArray.findLargest();
    if (largest != -1)
        cout << "The largest element in the array is: " << largest << endl;
    else
        cout << "Array is empty." << endl;
    return 0;
}