#include <iostream>
#include <cmath>
using namespace std;

double Area(double r)
{
    return M_PI * r * r;
}

int main()
{
    double r;
    cout << "Enter radius: ";
    cin >> r;
    if (r < 0)
    {
        cout << "Enter a positive radius : " << endl;
        return 1;
    }
    double a = Area(r);
    cout << "The Area of circle is: " << a << endl;
    return 0;
}
