#include <iostream>
using namespace std;

void recursion(int i, int n){
    if (i>n) return;
    printf("yuvraj\n");
    recursion(i+1, n);
}
void print(int i, int n){
    if (i > n) return;
    cout << i << endl;
    print(i+1, n);
}
void print2(int i, int n){
    // if (i > n) return;
    // cout << n-i+1 << endl;
    // print2(i+1, n);
    if (i < 1) return;
    cout << i << endl;
    print2(i-1,n);

}
int main(){
    int n;
    cin >> n;
    // recursion(1,n);
    // print(1,n);
    print2(n,n);


}