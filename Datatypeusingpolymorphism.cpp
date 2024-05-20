#include <iostream>
using namespace std;
class Adder
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Adder adder;
    int num1 = 5;
    int num2 = 7;
    double double1 = 3.14;
    double double2 = 2.17;
    int h1 = adder.add(num1, num2);
    cout << "Result of adding integer : " << h1 << endl;
    double r2 = adder.add(double1, double2);
    cout << "Result of adding doubles : " << r2 << endl;
    return 0;
}