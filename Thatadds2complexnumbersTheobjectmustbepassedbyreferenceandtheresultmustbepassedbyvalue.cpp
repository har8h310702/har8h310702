#include <iostream>
using namespace std;
class Complex
{
private:
    double r;
    double i;

public:
    Complex(double x, double y)
    {
        r = x;
        i = y;
    }
    Complex add(const Complex &other)
    {
        double resultReal = r + other.r;
        double resultImaginary = i + other.i;
        cout << r << "+" << i << "i+ " << other.r << "+" << other.i << "i = ";
        return Complex(resultReal, resultImaginary);
    }
    void display()
    {
        if (i >= 0)
            cout << r << "+" << i << "i" << endl;
        else
            cout << r << "-" << -i << "i" << endl;
    }
};
int main()
{
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);
    cout << "Sum of complex numbers: " << endl;
    Complex sum = num1.add(num2);
    sum.display();
    return 0;
}