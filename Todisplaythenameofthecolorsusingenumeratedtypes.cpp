#include <iostream>
using namespace std;
enum Color
{
    RED = 0,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    limit
};
int main()
{
    char name[20][20] = {"Red", "Green", "Blue", "Yellow", "Orange", "Purple"};
    int i;
    for (i = RED; i < limit; i++)
        cout << "Color " << name[i] << endl;
    return 0;
}
