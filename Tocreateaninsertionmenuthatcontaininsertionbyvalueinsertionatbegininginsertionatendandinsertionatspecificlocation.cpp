#include <iostream>
using namespace std;
void insertionAtBeg(int m[], int &ub, int val)
{
    int temp, lb = 0;
    if (ub >= 9)
    {
        cout << "Array is overflow cannot inserted value \n";
    }
    else
    {
        temp = ub;
        while (temp >= lb)
        {
            m[temp + 1] = m[temp];
            temp = temp - 1;
        }
        m[lb] = val;
        ub = ub + 1;
    }
    cout << " New Array elements Are = \n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
    }
}

void insertionAfterValue(int m[], int &ub, int val)
{
    int lb = 0, temp, tv;
    cout << "Enter the digit after to be inserted == ";
    cin >> tv;
    if (ub >= 9)
    {
        cout << "Array is overflow cannot inserted value \n";
    }
    else
    {
        for (int i = 0; i < ub; i++)
        {
            if (m[i] == tv)
            {
                int pos = i + 1;
                temp = ub;
                while (temp >= pos)
                {
                    m[temp + 1] = m[temp];
                    temp = temp - 1;
                }
                m[pos] = val;
                ub = ub + 1;
            }
        }
    }
    cout << " New Array Elements are == \n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
    }
}

void insertionAtLoc(int m[], int &ub, int val, int pos)
{
    int lb = 0, temp;
    if (ub >= 9)
    {
        cout << "Array is overflow cannot inserted value \n";
    }
    else
    {
        temp = ub;
        while (temp >= pos)
        {
            m[temp + 1] = m[temp];
            temp = temp - 1;
        }
        m[pos] = val;
        ub = ub + 1;
    }
    cout << " New Array Element Are == \n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
    }
}

void insertionAtEnd(int m[], int &ub, int val)
{
    if (ub >= 9)
    {
        cout << "Array is overflow cannot inserted value \n";
    }
    else
    {
        ub = ub + 1;
        m[ub] = val;
    }
    cout << "\n New Array Element Are == \n";
    for (int i = 0; i <= ub; i++)
    {
        cout << m[i] << endl;
    }
}

int main()
{
    int m[10], i, ub, val, ch, pos, size;
    cout << "Enter upper bound of the Array == ";
    cin >> ub;
    size = ub - 1;
    cout << "Enter Array Elements == ";
    for (i = 0; i <= size; i++)
    {
        cin >> m[i];
    }
    cout << "Enter the value to be inserted == \n";
    cin >> val;
    while (true)
    {
        cout << "Insertion choices \n";
        cout << "1 for Insertion at Begining \n";
        cout << "2 for Insertion of value after any digit \n";
        cout << "3 for Insertion at any specified Location \n";
        cout << "4 for Insertion at End \n";
        cout << "!!! 10 for Exit !!! \n";
        cout << "Enter your choice == \n";
        cin >> ch;
        if (ch == 10)
        {
            break;
        }
        switch (ch)
        {
        case 1:
        {
            insertionAtBeg(m, size, val);
            break;
        }
        case 2:
        {
            insertionAfterValue(m, size, val);
            break;
        }
        case 3:
        {
            cout << "Enter the position to be inserted == \n";
            cin >> pos;
            insertionAtLoc(m, size, val, pos);
            break;
        }
        case 4:
        {
            insertionAtEnd(m, size, val);
            break;
        }
        default:
        {
            cout << "!! Invalid your choice Plese Enter a valid choice !! \n";
            break;
        }
        }
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// void insertionAtBeg(int m[], int &ub, int val)
// {
//     int temp, lb = 0;
//     if (ub >= 9)
//     {
//         cout << "Array is Overflow Cannot inserted value";
//     }
//     else
//     {
//         temp = ub;
//         while (temp >= lb)
//         {
//             m[temp + 1] = m[temp];
//             temp = temp - 1;
//         }
//         m[lb] = val;
//         ub = ub + 1;
//     }
//     cout << "New Array Element Are==\n";
//     for (int i = 0; i <= ub; i++)
//     {
//         cout << m[i] << endl;
//         ;
//     }
// }
// void insertionAfterValue(int m[], int &ub, int val)
// {
//     int lb = 0, temp, tv;
//     cout << "Enter the digit after to be insert==";
//     cin >> tv;
//     if (ub >= 9)
//     {
//         cout << "Array is Overflow Cannot inserted value";
//     }
//     else
//     {
//         for (int i = 0; i < ub; i++)
//         {
//             if (m[i] == tv)
//             {
//                 int pos = i + 1;
//                 temp = ub;
//                 while (temp >= pos)
//                 {
//                     m[temp + 1] = m[temp];
//                     temp = temp - 1;
//                 }
//                 m[pos] = val;
//                 ub = ub + 1;
//             }
//         }
//     }
//     cout << "New Array Element Are==\n";
//     for (int i = 0; i <= ub; i++)
//     {
//         cout << m[i] << endl;
//         ;
//     }
// }
// void insertionAtLoc(int m[], int &ub, int val, int pos)
// {
//     int lb = 0, temp;
//     if (ub >= 9)
//     {
//         cout << "Array is Overflow Cannot inserted value";
//     }
//     else
//     {
//         temp = ub;
//         while (temp >= pos)
//         {
//             m[temp + 1] = m[temp];
//             temp = temp - 1;
//         }
//         m[pos] = val;
//         ub = ub + 1;
//     }
//     cout << "New Array Element Are==\n";
//     for (int i = 0; i <= ub; i++)
//     {
//         cout << m[i] << endl;
//         ;
//     }
// }
// void insertionAtEnd(int m[], int &ub, int val)
// {
//     if (ub >= 9)
//     {
//         cout << "Array is Overflow Cannot inserted value";
//     }
//     else
//     {
//         ub = ub + 1;
//         m[ub] = val;
//     }
//     cout << "\nNew Array Element Are==\n";
//     for (int i = 0; i <= ub; i++)
//     {
//         cout << m[i] << endl;
//     }
// }
// int main()
// {
//     int m[10], i, ub, val, ch, pos, size;
//     cout << "Enter upper bound of the Array==";
//     cin >> ub;
//     size = ub - 1;
//     cout << "Enter Array Element==";
//     for (i = 0; i <= size; i++)
//     {
//         cin >> m[i];
//     }
//     cout << "Enter the Value to be Instered==\n";
//     cin >> val;
//     while (true)
//     {
//         cout << " Insertion Choices\n";
//         cout << "1 for Insertion at Beginning\n";
//         cout << "2 for Insertion of Value After any Digit\n";
//         cout << "3 for Insertion at any Specified Location\n";
//         cout << "4 for Insertion at End\n";
//         cout << "!!!  10 For Exit!!!  \n";
//         cout << "\n\nEnter Your Choice==\n";
//         cin >> ch;
//         if (ch == 10)
//         {
//             break;
//         }
//         switch (ch)
//         {
//         case 1:
//         {
//             insertionAtBeg(m, size, val);
//             break;
//         }
//         case 2:
//         {
//             insertionAfterValue(m, size, val);
//             break;
//         }
//         case 3:
//         {
//             cout << "Enter the position to be inserted==\n";
//             cin >> pos;
//             insertionAtLoc(m, size, val, pos);
//             break;
//         }
//         case 4:
//         {
//             insertionAtEnd(m, size, val);
//             break;
//         }
//         default:
//         {
//             cout << "!!Invalid Your Choice please Enter a Valid Choice!!\n";
//             break;
//         }
//         }
//     }
//     return 0;
// }