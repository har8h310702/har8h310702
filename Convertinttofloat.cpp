#include <iostream>
using namespace std;

int main()
{
    int integer_number;
    cout<<"Enter the integer : ";
    cin>> integer_number;

    float float_number = static_cast < float > (integer_number);

    cout<<"Integer : "<<integer_number<<endl;
    cout<<"Float : "<<float_number<<endl;
    return 0;
}