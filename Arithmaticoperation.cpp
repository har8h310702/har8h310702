#include<iostream>
using namespace std;

int main()
{
  int n1,n2,add,sub,multi,div;
  cout<<"Enter the two numbers: ";
  cin>>n1>>n2;
  cout<<endl;
  add= n1+n2;
  sub= n1-n2;
  multi= n1*n2;
  div= n1/n2;
  cout<<"racThe addition of n1 and n2 is: "<<add<<endl;
  cout<<"The subtraction of n1 and n2 is: "<<sub<<endl;
  cout<<"The multiplication of n1 and n2 is: "<<multi<<endl;
  cout<<"The division of n1 and n2 is: "<<div<<endl;
  return 0;
}