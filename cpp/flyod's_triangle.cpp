#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows

    int num = 1;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            cout << num << " "; // Print the current number
            // num = i+1; // Reset num to the current row number
            num++;
        }
        cout << endl;
    }

    return 0;
}