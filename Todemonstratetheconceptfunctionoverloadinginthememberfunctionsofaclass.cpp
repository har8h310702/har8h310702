#include <iostream>
using namespace std;
class Calculator
{
public:
    void add(int a, int b)
    {
        cout << "Integer addition: " << a + b << endl;
    }
    void add(double a, double b)
    {
        cout << "Double addition: " << a + b << endl;
    }
};
int main()
{
    Calculator c;
    c.add(12, 34);
    c.add(234.43, 256.434);
    return 0;
}