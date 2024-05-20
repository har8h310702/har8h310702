#include <iostream>
using namespace std;
void deletionAtBeg(int m[], int i, int &ub)
{
    int lb = 0, temp;
    if (ub < 0)
    {
        cout << "Array is Empty Deletion is Not Possiable";
    }
    else
    {
        for (i = 0; i <= ub; i++)
        {
            m[i] = m[i + 1];
        }
        ub = ub - 1;
    }
    cout << "New Array Element Are==\n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
        ;
    }
}
void deletionByValue(int m[], int i, int &ub, int el)
{
    int lb = 0, pos;
    if (ub < 0)
    {
        cout << "Array is Empty Deletion is Not Possiable";
    }
    else
    {
        for (i = 0; i < ub; i++)
        {
            if (m[i] == el)
            {
                pos = i;
                while (i < ub)
                {
                    m[i] = m[i + 1];
                    i = i + 1;
                }
                ub = ub - 1;
            }
        }
    }
    cout << "New Array Element Are==\n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
        ;
    }
}
void deletionAtLoc(int m[], int i, int &ub, int pos)
{
    int lb = 0;
    if (ub < 0)
    {
        cout << "Array is Empty Deletion is Not Possiable";
    }
    else
    {
        i = pos;
        while (i < ub)
        {
            m[i] = m[i + 1];
            i = i + 1;
        }
        ub = ub - 1;
    }
    cout << "New Array Element Are==\n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
        ;
    }
}
void deletionAtEnd(int m[], int i, int &ub)
{
    if (ub >= 9)
    {
        cout << "Array is Overflow Cannot inserted value";
    }
    else
    {
        ub = ub - 1;
    }
    cout << "\nNew Array Element Are==\n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
    }
}
int main()
{
    int m[10], i, ub, ch, pos, el, size;
    cout << "Enter upper bound of the Array==";
    cin >> ub;
    size = ub - 1;
    cout << "Enter Array Element==";
    for (i = 0; i <= size; i++)
    {
        cin >> m[i];
    }
    while (true)
    {
        cout << " Deletion Choices\n";
        cout << "1 for Deletion at Beginning\n";
        cout << "2 for Deletion by Value\n";
        cout << "3 for Deletion at any Specified Location\n";
        cout << "4 for Deletion at End\n";
        cout << "!!!  10 For Exit!!!  \n";
        cout << "\n\nEnter Your Choice==\n";
        cin >> ch;
        if (ch == 10)
        {
            break;
        }
        switch (ch)
        {
        case 1:
        {
            deletionAtBeg(m, i, size);
            break;
        }
        case 2:
        {
            cout << "Enter the value to be deleted==\n";
            cin >> el;
            deletionByValue(m, i, size, el);
            break;
        }
        case 3:
        {
            cout << "Enter the position to be deletion==\n";
            cin >> pos;
            deletionAtLoc(m, i, size, pos);
            break;
        }
        case 4:
        {
            deletionAtEnd(m, i, size);
            break;
        }
        default:
        {
            cout << "!!Invalid Your Choice please Enter a Valid Choice!!\n";
            break;
        }
        }
    }
    return 0;
}