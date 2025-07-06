#include <iostream>

// Demonstrate operator precedence in C++
void operatorPrecedence()
{
    int a = 2, b = 3, c = 4, d = 5;
    int result;

    // Parentheses
    result = a + b * c; // Multiplication before addition
    std::cout << "a + b * c = " << result << std::endl;

    result = (a + b) * c; // Parentheses change precedence
    std::cout << "(a + b) * c = " << result << std::endl;

    // Unary operators
    result = -a + b;
    std::cout << "-a + b = " << result << std::endl;

    // Increment/Decrement
    result = a++ + b;
    std::cout << "a++ + b = " << result << " (a after increment: " << a << ")" << std::endl;

    // Multiplicative
    result = a * b / c;
    std::cout << "a * b / c = " << result << std::endl;

    // Additive
    result = a + b - c;
    std::cout << "a + b - c = " << result << std::endl;

    // Relational
    std::cout << "a < b = " << (a < b) << std::endl;

    // Equality
    std::cout << "a == b = " << (a == b) << std::endl;

    // Logical AND/OR
    std::cout << "(a < b) && (b < c) = " << ((a < b) && (b < c)) << std::endl;
    std::cout << "(a < b) || (b > c) = " << ((a < b) || (b > c)) << std::endl;

    // Assignment
    result = a = b + c;
    std::cout << "a = b + c; result = " << result << ", a = " << a << std::endl;

    // Conditional (ternary)
    result = (a > b) ? a : b;
    std::cout << "(a > b) ? a : b = " << result << std::endl;

    // Bitwise
    result = ((a & b) | c) ^ d;
    std::cout << "((a & b) | c) ^ d = " << result << std::endl;
}
// using namespace std; // Removed to avoid namespace pollution

int main()
{
    operatorPrecedence();
    return 0;
}