#include<iostream>
using namespace std;
int main()
{
    int a, i, sum=0;
    cout<<"Enter a number : ";
    cin>>a;
    for ( i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (a==sum)
    {
        cout<<"Perfect Number";
    }
    else {
        cout<<"Not Perfect Number";
    }
    return 0;
}