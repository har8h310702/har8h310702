#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int roll_no;
    float marks;

public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
    void getdata()
    {
        cout << "Enter Student Name: ";
        cin.ignore();
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Enter The Marks: ";
        cin >> marks;
    }
};
int main()
{
    student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the " << i + 1 << "th student details: " << endl;
        s[i].getdata();
        cout << endl;
    }
    for (i = 0; i < 5; i++)
    {
        cout << "Details of " << i + 1 << "th student: " << endl;
        s[i].display();
        cout << endl;
    }
    return 0;
}