#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    int  value = grade; // Implicit conversion from char to int
    float value2 = 100.99;
    int new_value2 = (int)value2; // Explicit conversion from float to int
    int divide = value / new_value2; // Implicit conversion from int to float
    cout << value <<endl<< value2<< endl; 
    cout << divide << endl; // Output the result of the division
    cout<< (value /(double)value2) << endl; // Implicit conversion from int to double
    return 0;
}