#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    cout<<"before swapping a = "<<a<<" & b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a = "<<a<<" & b = "<<b<<endl;
    getch();
}