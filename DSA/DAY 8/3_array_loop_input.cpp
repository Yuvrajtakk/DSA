#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int sz = sizeof(arr) / sizeof(int);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }

    return 0; 
}