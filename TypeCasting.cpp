#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    int  value = grade; // Implicit conversion from char to int
    float value2 = 100.99;
    int new_value2 = (int)value2; // Explicit conversion from float to int
    cout << value <<endl<< value2<< endl; 
    return 0;
}