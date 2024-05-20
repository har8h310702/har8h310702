#include<iostream>
using namespace std;
int main()
{
    int decimal=0, binary, base=1,rem;
    cout<<"Enter a binary number: "<<endl;
    cin>>binary;
    while (binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    cout<<"Decimal Equavalent: "<<decimal;
    return 0;
}