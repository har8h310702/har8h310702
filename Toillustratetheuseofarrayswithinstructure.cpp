#include <iostream>
using namespace std;
struct student
{
    int roll_no;
    float marks[5];
};
int main()
{
    student s;
    cout << "Enter the roll number: ";
    cin >> s.roll_no;
    cout << "Enter the five subjects marks: ";
    for (int i = 0; i < 5; i++)
        cin >> s.marks[i];
    cout << "Roll no: " << s.roll_no << endl;
    cout << "Marks in 5 subjects: " << endl;
    for (int i = 0; i < 5; i++)
        cout << s.marks[i] << endl;
    return 0;
}