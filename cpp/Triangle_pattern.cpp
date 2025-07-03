#include<iostream>
using namespace std;
int main(){
    // This program prints a triangle pattern of numbers
    int i,j,n;
    cout << "Enter the number of rows: ";
    cin >> n; // User input for number of rows
    for (i =1 ; i <= n; i++){
        for (j=1; j<= i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}