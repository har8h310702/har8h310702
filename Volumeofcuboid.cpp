#include <iostream>
using namespace std;

double volume(double l = 1, double w = 1, double h = 1)
{
    return l * w * h;
}

int main()
{
    double l, w, h;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;
    double v = volume(l, w, h);
    cout << "The volume of cuboid is : " << v << endl;
    return 0;
}