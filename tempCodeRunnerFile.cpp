#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows

    for (i = 0; i < n; i++)
    {
        for (j = n-i; j > 0; j--)
        {
            cout << " "; // Print the current row number
        }
        for (j = 1; j <= i+1; j++)
        {
            cout <<j ; // Print the current row number
        }
        int num = i; // Start from the current row number
        for (j = i; j > 0; j--)
        {
            cout <<j ; // Print the current row number
            num--;
        }
        cout << endl;
    }

    return 0;
}