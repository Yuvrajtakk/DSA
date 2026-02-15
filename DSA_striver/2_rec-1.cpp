#include<bits/stdc++.h>
using namespace std;

//recursion without base case
void print(int n){
    cout << n << endl;
    n++;
    print(n); //4295 overflow after this
 }

int main(){
    print(1);
    return 0;
}