#include <iostream>
using namespace std;

void recursion(int i, int n){ //print yuvraj n times
    if (i>n) return;
    printf("yuvraj\n");
    recursion(i+1, n);
}
void print(int i, int n){ // 1 to n
    if (i > n) return;
    cout << i << endl;
    print(i+1, n);
}
void print2(int i, int n){ // n to 1
    // if (i > n) return;
    // cout << n-i+1 << endl;
    // print2(i+1, n);
    if (i < 1) return;
    cout << i << endl;
    print2(i-1,n);
}
void backtrack_print(int i, int n){ // 1 to n
    if (i < 1) return;
    backtrack_print(i-1, n);
    cout << i << endl;
}
void backtrack_print2(int i, int n){ // n to 1
    if (i > n) return;
    backtrack_print2(i+1, n);
    cout << i << endl;
}

void sum_of_n_parameter(int i, int sum){ // sum of 1 to n
    if (i < 1) {
        cout << sum << endl;
        return;
    }
    sum_of_n_parameter(i-1, sum+i);
}
int sum_of_n_function(int n){ // sum of 1 to n
    if (n == 0 ) return 0;
    int sum = n + sum_of_n_function(n-1);
    cout << sum << endl;
    return sum;
}
int factorial(int n){
    if (n == 0) return 1;
    int fact = n * factorial(n-1);
    cout << fact << endl;
    return fact;
}
int main(){
    int n;
    cin >> n;
    // recursion(1,n);
    // print(1,n);
    // print2(n,n);
    // backtrack_print(n,n);
    // backtrack_print2(1,n);
    // sum_of_n_parameter(n,0);
    // sum_of_n_function(n);
    factorial(n);
    return 0;
}