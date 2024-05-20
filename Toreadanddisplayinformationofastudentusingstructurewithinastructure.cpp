#include <iostream>
#include <string>
using namespace std;
struct Address
{
    string city;
    string state;
};
struct Student
{
    string name;
    int age;
    Address a;
};
int main()
{
    Student s;
    cout << "Enter Student Name: ";
    cin >> s.name;
    cout << "Enter Student Age: ";
    cin >> s.age;
    cin.ignore();
    cout << "Enter Student Address: " << endl;
    cout << "City: ";
    cin >> s.a.city;
    cout << "State: ";
    cin >> s.a.state;
    cout << "\n Student Information: " << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Address: " << s.a.city << ", " << s.a.state << " " << endl;
    return 0;
}
