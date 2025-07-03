#include <iostream>
using namespace std;
int main()
{
    // This program prints a square pattern of numbers
    // where each row contains the numbers from 1 to 4.
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << j << " "; // Print numbers from 1 to n in each row
        }
        cout << endl;
    }
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    for (i = 0; i < n; i++)
    {
        char ch = 'A';
        for (j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++; // Increment character for next column
        }
        cout << endl;
    }
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    int m = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << m << " "; // Print row number
            m++;              // Increment row number for next row
        }
        cout << endl;
    }
    // 1 2 3
    // 4 5 6
    // 7 8 9

    char ch = 'A';
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++; // Increment character for next column
        }
        cout << endl;
    }
    // A B C
    // D E F
    // G H I
    return 0;
}