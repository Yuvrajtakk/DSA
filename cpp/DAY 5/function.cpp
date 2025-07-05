#include <iostream>
using namespace std;
// function definition

int printHello()
{
    cout << "hello\n";
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
int minmunOfTwo(double a, double b)
{
    return a < b ? a : b;
}
int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int passByValue(int a, int b)
{
    a = a + 10;
    b += 10;
    return (a + b);
}

int sumOfDigits(int num)
{
    int digitSum = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        num = num / 10;
        digitSum += last_digit;
    }
    return digitSum;
}

int bCr(int n, int r)
{
    double bcr = (factorialN(n)) / (factorialN(r) * factorialN(n - r));
}
int main()
{
    // function call / invoke
    printHello();
    cout << sum(10, 20) << endl;
    cout << "Minimum number is :" << minmunOfTwo << endl;
    cout << "factorial of 5 is :" << factorialN(4) << "\n";
    int x = 10, y = 20;
    cout << passByValue(x, y) << "\n"; // pass by value
    cout << "x = " << x << " y =" << y << "\n";
    cout << "The sum of digit of 145 is :" << sumOfDigits(145) << endl;
    cout << "the bCr binomial coefficient for n = 8 and r = 2 is :" << bCr(8, 2) << endl;
    return 0;
 