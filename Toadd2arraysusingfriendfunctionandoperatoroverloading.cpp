#include <iostream>
using namespace std;
class Array
{
private:
    int s;
    int data[100];

public:
    Array(int n)
    {
        s = n;
        cout << "Enter " << n << " elements for the array: " << endl;
        for (int i = 0; i < n; i++)
            cin >> data[i];
    }
    friend int getSize(Array &obj)
    {
        return obj.s;
    }
    friend Array operator+(Array &arr1, Array &arr2)
    {
        Array result(getSize(arr1), true);
        for (int i = 0; i < getSize(arr1); i++)
            result.data[i] = arr1.data[i] + arr2.data[i];
        return result;
    }
    Array(int n, bool noInput)
    {
        s = n;
    }
    void display()
    {
        cout << "Array elements: ";
        for (int i = 0; i < s; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};
int main()
{
    int s;
    cout << "Enter the size of the arrays : ";
    cin >> s;
    Array array1(s);
    Array array2(s);
    Array sum = array1 + array2;
    cout << "Sum of the arrays" << endl;
    sum.display();
    return 0;
}