#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows

    for (i = 0; i < n; i++)
    {
        char ch = 'A'; // Initialize character for printing letters
        for (j = 0; j < i; j++)
        {
            cout << " "; // Print the current row number
        }
        for (j = 0; j < n - i; j++)
        {
            cout << ch; // Print the current row number
            ch++;       // Increment character for next letter
        }
        cout << endl;
    }

    return 0;
}