#include <iostream>
using namespace std;

int main() {
    // Integer type modifiers
    short int a = 10;           // short
    unsigned short int b = 20;  // unsigned short
    unsigned int c = 30;        // unsigned
    long int d = 40;            // long
    unsigned long int e = 50;   // unsigned long
    long long int f = 60;       // long long
    unsigned long long int g = 70; // unsigned long long

    // Character type modifiers
    signed char h = 'A';        // signed char
    unsigned char i = 'B';      // unsigned char

    // Floating point type modifiers
    float j = 1.23f;            // float
    double k = 4.56;            // double
    long double l = 7.89L;      // long double

    cout << "short int: " << a << endl;
    cout << "unsigned short int: " << b << endl;
    cout << "unsigned int: " << c << endl;
    cout << "long int: " << d << endl;
    cout << "unsigned long int: " << e << endl;
    cout << "long long int: " << f << endl;
    cout << "unsigned long long int: " << g << endl;
    cout << "signed char: " << h << endl;
    cout << "unsigned char: " << i << endl;
    cout << "float: " << j << endl;
    cout << "double: " << k << endl;
    cout << "long double: " << l << endl;

    return 0;
}