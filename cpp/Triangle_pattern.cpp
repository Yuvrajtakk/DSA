#include<iostream>
using namespace std;
int main(){
    // This program prints a triangle pattern of numbers
    int i,j,n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows
    for (i = 0 ; i < n; i++){
        for (j = 0; j<= i; j++){
            cout << j;
        }
        cout << endl;
    }
    // 0
    // 01
    // 012
    // 0123
    for (i = 0 ; i < n; i++){
        int n = i + 1; // Calculate the number of elements in the row
        for (j = 0; j< i+1; j++){
            cout << i;
        }
        cout << endl;
    }
    //0
    //11
    //222
    //3333
    for (i = 0 ; i < n; i++){
        char ch = 'A';
        for (j = 0; j<= i; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}