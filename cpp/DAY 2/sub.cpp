#include <iostream>

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "Result: " << subtract(x, y) << std::endl;
    return 0;
}