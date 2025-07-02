#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "sum = " << sum << endl;

    int m = 50;
    int oddSum = 0;

    for (int i = 1; i <= m; i++)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
    }
    cout << "odd sum = " << oddSum << endl;

    int o = 10;
    int j = 1;

    do
    {
        cout << j << "";
        j++;
    } while (j <= o);

    cout << endl;

    return 0;
}