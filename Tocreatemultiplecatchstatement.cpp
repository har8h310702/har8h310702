// #include <iostream>
// using namespace std;

// void Test(int x)
// {
//     try
//     {
//         if (x == 1)
//             throw x;
//         else if (x == 0)
//             throw 'x';
//         else if (x == -1)
//             throw 1.0;
//         cout << "End of try block\n";
//     }
//     catch (char c)
//     {
//         cout << "Caught a clear\n";
//     }
//     catch (int m)
//     {
//         cout << "Caught an Int\n";
//     }
//     catch (double d)
//     {
//         cout << "Caught an double\n";
//     }
//     cout << "End of try catch system\n";
// }
// int main()
// {
//     cout << "x==1\n";
//     Test(1);
//     cout << "x==0\n";
//     Test(0);
//     cout << "x==-1\n";
//     Test(-1);
//     cout << "x==2\n";
//     Test(2);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a & b: ";
//     cin >> a;
//     cin >> b;
//     int x = a - b;
//     try
//     {
//         if (x != 0)
//         {
//             cout << a / x;
//         }
//         else
//         {
//             throw(x);
//         }
//     }
//     catch (int i)
//     {
//         cout << "Exception caught";
//     }
//     cout << "\nEND";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void Test(int x)
// {
//     try
//     {
//         if (x == 1)
//             throw x;
//         else if (x == 0)
//             throw 'x';
//         else if (x == -1)
//             throw 1.0;
//         cout << "End of try block\n";
//     }
//     catch (...)
//     {
//         cout << "Caught an exception\n";
//     }
//     cout << "End of try catch system\n";
// }
// int main()
// {
//     cout << "x==1\n";
//     Test(1);
//     cout << "x==0\n";
//     Test(0);
//     cout << "x==-1\n";
//     Test(-1);
//     cout << "x==2\n";
//     Test(2);
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ofstream fout;
//     fout.open("country\n");
//     fout<<"USA\n";
//     fout<<"UK\n";
//     fout<<"South Korea\n";
//     fout.close();

//     // ofstream fout;
//     fout.open("capital\n");
//     fout<<"Washington\n";
//     fout<<"London\n";
//     fout<<"Seoul\n";
//     fout.close();

//     const int N = 100;
//     char line[N];
//     ifstream fin;
//     fin.open("country");
//     while (fin)
//     {
//         fin.getline(line,N);
//         cout<<line;
//     }
//     fin.close();

//     fin.open("capital");
//     while (fin)
//     {
//         fin.getline(line,N);
//         cout<<line;
//     }
//     fin.close();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// template <class t1 = int, class t2 = float, class t3= char>
// class myClass{
//     public:
//     t1 data1;
//     t2 data2;
//     t3 data3;
//     myClass(t1 a,t2 b, t3 c){
//         data1=a;
//         data2=b;
//         data3=c;
//     }
//     void display(){
//         cout<<"enter the value of a: "<<data1<<endl;
//         cout<<"enter the value of b: "<<data2<<endl;
//         cout<<"enter the value of c: "<<data3<<endl;
//     }
// };
// int main(){
//     myClass<>obj(1,4.9,'c');
//     obj.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value of a & b: ";
//     cin>>a>>b;
//     int x=a-b;
//     try{
//         if (x!=0)
//         {
//             cout<<a/x;
//         }
//         else{
//             throw(x);
//         }
//     }
//     catch(int i){
//         cout<<"exception caught \n"<<x<<endl;
//     }
//     cout<<"END";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// template <class T>
// void swap(T &x, T &y){
//     T temp = x;
//     x = y;
//     y = temp;
// }
// void fun(int m, int n, float a, float b){
//     cout<<"M and N before swap\n"<<m<<n<<endl;
//     swap(m,n);
//     cout<<"After swap\n"<<m<<n<<endl;
//     cout<<"A and B before swap\n"<<a<<b<<endl;
//     swap(a,b);
//     cout<<"after swap\n"<<a<<b<<endl;
// }
// int main()
// {
//     fun(5,6,1.7,1.8);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Test{
//     public:
//     void func(int x){
//         cout<<"Value of x: "<<x<<endl;
//     }
//     void func(double x){
//         cout<<"Value of x : "<<x<<endl;
//     }
// };
// int main()
// {
//     Test obj;
//     obj.func(8);
//     obj.func(2.103);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Complex{
//     private:
//     int real,imag;
//     public:
//     Complex(int r=0, int i = 0){
//         real = r;
//         imag = i;
//     }
//     Complex operator+(Complex const &obj){
//         Complex res;
//         res.real = real + obj.real;
//         res.imag = imag + obj.imag;
//         return res;
//     }
//     void print(){
//         cout<<real<<" + i "<<imag<<endl;
//     }
// };
// int main(){
//     Complex c1(10,5),c2(2,4);
//     Complex c3 = c1+ c2;
//     c3.print();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Base{
//     public:
//     virtual void print(){
//         cout<<"print base class\n";
//     }
//     void show(){
//         cout<<"show base class";
//     }
// };
// class Derived:public Base {
//     public:
//     void print(){
//         cout<<"print derived class\n";
//     }
//     void show(){
//         cout<<"show derived class";
//     }
// };
// int main(){
//     Base *b;
//     Derived d;
//     b=&d;
//     b->print();
//     b->show();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class b{
//     public:
//     virtual void show() = 0;
//     // void print(){
//     //     cout<<"print base class\n";
//     // }
// };
// class c: public b {
//     public:
//     // void print(){
//     //     cout<<"print dervied class";
//     // }
//     void show(){
//         cout<<"show derived class";
//     }
// };
// int main()
// {
//     b *ob;
//     c obj;
//     ob=&obj;
//     // ob->print();
//     ob->show();
//     return 0;
// }

#include <iostream>
using namespace std;
class test{
    public:
    void myFunction();
    static int myNum();
};

int test::myNum=42;
void test::myFunction(){
    cout<<"Hello world!";
}
int main(){
    test ob;
    ob.myFunction();
    cout<<test::myNum;
    return 0;
}