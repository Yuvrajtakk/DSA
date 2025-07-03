#include <iostream>
using namespace std;

int main()
{
    // This program prints a triangle pattern of numbers
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    // 1
    // 12
    // 123
    // 1234
    for (i = 0; i < n; i++)
    {
        int num = i + 1; // Calculate the number to print in the row
        for (j = 0; j < i + 1; j++)
        {
            cout << num;
        }
        cout << endl;
    }
    // 1
    // 22
    // 333
    // 4444
    for (i = 0; i < n; i++)
    {
        char ch = 'A';
        for (j = 0; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    // A
    // AB
    // ABC
    // ABCD
    return 0;
}
