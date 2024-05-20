#include <iostream>
using namespace std;
class arr
{
    int *a;
    int s;

public:
    arr(int n)
    {
        s = n;
        a = new int[s];
        cout << "Enter " << s << " elements of array: ";
        for (int i = 0; i < s; i++)
            cin >> a[i];
    }
    ~arr()
    {
        delete[] a;
    }
    operator++(int)
    {
        for (int i = 0; i < s; i++)
            ++a[i];
    }
    operator--(int)
    {
        for (int i = 0; i < s; i++)
            --a[i];
    }
    void display()
    {
        for (int i = 0; i < s; i++)
            cout << a[i] << "\t";
        cout << endl;
    }
};
int main()
{
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    arr a1(s);
    cout << "Original array: ";
    a1.display();
    cout << "Incremented array: ";
    a1++;
    a1.display();
    cout << "Decremented array: ";
    a1--;
    a1.display();
    return 0;
}