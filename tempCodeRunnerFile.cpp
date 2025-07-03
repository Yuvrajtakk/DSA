#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n - i-1 ; j++)
        {
            cout << " "; // Print spaces for right alignment
        }
        cout << "*"; // Print the first star
        if(i != 0){
            for(j = 0; j < 2*i- 1; j++)
            {
                cout << " ";
            }
            cout << "*"; // Print the second star for rows other than the first
        }
        cout << endl;
    }

    for (i = 0; i< n-1; i++)
    {
        for(j = 0; j <i+1; j++){
            cout << " "; // Print spaces for left alignment
        }
        cout << "*"; // Print the first star
        if(i != n-2){
            for(j = 2*(n-i)-5; j> 0; j--)     
            {
                cout << " ";
            }
            cout << "*"; // Print the second star for rows other than the last
        }
        cout << endl;               
    }


    return 0;   
}