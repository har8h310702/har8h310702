#include <iostream>
using namespace std;
int main()
{
    int num, i, n, m;
    string text[20];
    cout << "Enter the number of lines you want to enter: ";
    cin >> num;
    cout << "Enter your text: \n";
    for (i = 0; i < num; i++)
        cin >> text[i];
    cout << "Enter the starting line (1-" << num << "): " << endl;
    cin >> m;
    cout << "Enter the number of lines (1-" << num - m + 1 << "): " << endl;
    cin >> n;
    if (m < 1 || n < 1 || n + m - 1 > num || m > num)
        cout << "You entered invalid input.";
    else
    {
        for (i = m - 1; i < n + m - 1; i++)
            cout << "Text on " << i + 1 << " line is: " << text[i] << endl;
    }
    return 0;
}