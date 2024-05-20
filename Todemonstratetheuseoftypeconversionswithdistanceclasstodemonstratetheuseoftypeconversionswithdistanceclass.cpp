#include <iostream>
using namespace std;
class Distance
{
    int m;

public:
    Distance(int n)
    {
        m = n;
    }
    displayMeter()
    {
        cout << "Distance in meter: " << m << " m" << endl;
    }
    displayFeet()
    {
        double feet = m * 3.28084;
        cout << "Distance in feet: " << feet << " ft" << endl;
    }
    displayInches()
    {
        double inch = m * 39.3701;
        cout << "Distance in inches: " << inch << " in" << endl;
    }
};
int main()
{
    Distance d1(10);
    d1.displayMeter();
    d1.displayFeet();
    d1.displayInches();
    return 0;
}