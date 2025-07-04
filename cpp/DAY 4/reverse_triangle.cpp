#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows

    for (i = 0; i < n; i++)
    {
        int num = i + 1;
        for (j = 0; j <= i; j++)
        {
            cout << num;
            num--;
        }
        cout << endl;
    }
    // 1
    // 21
    // 321
    // 4321
    for (i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (j = i + 1; j > 0; j--)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }

    return 0;
}