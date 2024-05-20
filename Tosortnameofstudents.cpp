#include <iostream>
#include <string>
using namespace std;
void sort(string names[])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (names[j] > names[j + 1])
            {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}
int main()
{
    string names[10];
    cout << "Enter 10 students names: ";
    for (int i = 0; i < 10; i++)
        cin >> names[i];
    sort(names);
    cout << "Sorted list of student names: ";
    for (int i = 0; i < 10; i++)
        cout << names[i] << endl;
    return 0;
}