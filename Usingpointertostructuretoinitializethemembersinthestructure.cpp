#include <iostream>
using namespace std;
struct test
{
    int a;
    int b;
};
int main()
{
    test t, *p;
    p = &t;
    p->a = 10;
    p->b = 20;
    cout << "Value of a: " << p->a << endl;
    cout << "Value of b: " << p->b << endl;
    return 0;
}