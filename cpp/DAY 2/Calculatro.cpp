#include <iostream>
using namespace std;

int main() {
    float a,b,sum,div, mul, sub;
    cout << "Enter the two numbers:"<<endl;
    cin >>a>>b;
    char operation;
    cout<< "Enter the opertaion you want to perform: +,-,*,/ :"<<endl;
    cin >> operation;
    if (operation == '+'){
        sum = a + b;
        cout << "sum is: " << sum << endl;
    }
    else if (operation == '-') {
        sub = a - b;    
        cout << "sub is: " << sub << endl;
    }
    else if (operation == '/') {
        div = a / b;    
        cout << "Div is: " << div << endl;
    }
    else if (operation == '*') {
        mul = a * b;    
        cout << "mul is: " << mul << endl;
    }
    return 0;
}