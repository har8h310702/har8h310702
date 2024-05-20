#include <iostream>
#include <string>
using namespace std;
int main()
{
    string msg;
    string str;
    int pos;
    cout << "Enter the main text: ";
    cin >> msg;
    cout << "Enter the string to insert: "<<endl;
    cin >> str;
    cout << "Enter the position to insert (0-based index): "<<endl;
    cin >> pos;
    if (pos < 0 || pos > msg.length())
    {
        cout << "Invalid position. Insertion aborted." << endl;
    }
    else
    {
        msg.insert(pos, str);
        cout << "Updated main text: " << msg << endl;
    }
    return 0;
}