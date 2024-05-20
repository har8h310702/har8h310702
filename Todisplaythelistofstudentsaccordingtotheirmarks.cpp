#include <iostream>
using namespace std;
struct Student
{
    char name[20];
    int marks;
};
void bubbleSort(Student s[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (s[j].marks < s[j + 1].marks)
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
int main()
{
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> s[i].name;
        cout << "Enter student " << i + 1 << " marks: ";
        cin >> s[i].marks;
    }
    bubbleSort(s);
    cout << "\n Students sorted by marks (descending order) : " << endl;
    for (int i = 0; i < 5; i++)
        cout << "Name: " << s[i].name << ", Marks: " << s[i].marks << endl;
    return 0;
}