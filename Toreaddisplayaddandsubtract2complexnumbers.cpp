#include <iostream>
using namespace std;
class Complex
{
private:
    double r;
    double i;

public:
    Complex()
    {
        cout << "Enter the real part: ";
        cin >> r;
        cout << "Enter the imaginary part: ";
        cin >> i;
    }
    void display()
    {
        cout << r << " + " << i << "i" << endl;
    }
    Complex add(const Complex &other)
    {
        cout << "The sum is: " << r + other.r << " + " << i + other.i << "i" << endl;
    }
    Complex subtract(const Complex &other)
    {
        cout << "The difference is: " << r - other.r << " + " << i - other.i << "i" << endl;
    }
};
int main()
{
    Complex c1;
    Complex c2;
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    c1.add(c2);
    c1.subtract(c2);
    return 0;
}