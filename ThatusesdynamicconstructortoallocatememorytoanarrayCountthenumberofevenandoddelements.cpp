#include <iostream>
using namespace std;
class Array
{
private:
    int *arr;
    int size;

public:
    Array(int s)
    {
        size = s;
        arr = new int[size];
    }
    ~Array()
    {
        delete[] arr;
    }
    void inputElements()
    {
        cout << "Enter " << size << " elements into the array: " << endl;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    void countEvenOdd()
    {
        int evenCount = 0;
        int oddCount = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
        cout << "Number of even elements are: " << evenCount << endl;
        cout << "Number of odd elements are: " << oddCount << endl;
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
    Array arr(size);
    arr.inputElements();
    int evenCount, oddCount;
    arr.countEvenOdd();
    return 0;
}