#include <iostream>
using namespace std;
class B;
class A
{
    double a;

public:
    A(double x)
    {
        a = x;
    }
    friend double mean(A &obj1, B &obj2);
};
class B
{
    double b;

public:
    B(double x)
    {
        b = x;
    }
    friend double mean(A &obj1, B &obj2);
};
double mean(A &obj1, B &obj2)
{
    return (obj1.a + obj2.b) / 2.0;
}
int main()
{
    A obj1(23.642);
    B obj2(27.534);
    cout << "Mean is: " << mean(obj1, obj2);
    return 0;
}