#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3];
    cout << "Enter the elements of the 3*3 matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];
    }
    int transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            transpose[i][j] = matrix[j][i];
    }
    cout << "Transposed matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << transpose[i][j] << "\t";
        cout << endl;
    }
    return 0;
}