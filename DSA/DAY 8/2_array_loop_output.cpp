#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {50, 80, 20, 51, 52};
    double price[] = {56.2, 54, 22.5, 36.8, 99.4};
    // int n = 5; // size
    int sz = sizeof(arr) / sizeof(int);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}