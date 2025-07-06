#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void showScope() {
    // Local variable
    int localVar = 20;
    cout << "Inside function - globalVar: " << globalVar << endl;
    cout << "Inside function - localVar: " << localVar << endl;
}

int main() {
    cout << "In main - globalVar: " << globalVar << endl;
    // cout << localVar; // Error: localVar is not visible here
    showScope();
    return 0;
}