#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    const char *str = "Hello World";
    size_t len = strlen(str);
    char *str2 = new char[len + 1];
    strcpy(str2, str);
    cout << "Copied String: " << str2 << endl;
    delete[] str2;
    return 0;
}