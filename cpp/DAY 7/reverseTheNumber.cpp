#include <iostream>
using namespace std;

int reverseInt(int n) {
    int revNum = 0;
    while (n != 0) {
        revNum = revNum * 10 + n % 10;
        n /= 10;
    }
    return revNum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int revNum = reverseInt(num);
    cout << "Reversed number: " << revNum << endl;
    return 0;
}