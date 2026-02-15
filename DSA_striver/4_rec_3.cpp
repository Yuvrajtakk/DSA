#include <iostream>
using namespace std;

void reverse_array(int start, int end, int a[]){ //using start and end to reverse the array , two variables
    if (start >= end){
        return;
    }
    swap(a[start], a[end-1]);
    reverse_array(start+1, end-1, a);
}
void reverse_array_one_var(int n, int a[]){ //using only n to reverse the array , one variable
    if (n <= 1){
        return;
    }
    swap(a[0], a[n-1]);
    reverse_array_one_var(n-1, a);
}
void reverse_array_one_var_2(int i, int a[], int n){ //using only n to reverse the array , one variable
    if (i >= n/2){
        return;
    }
    swap(a[i], a[n - i - 1]);
    reverse_array_one_var_2(i+1 , a, n);
}
char palindrome_string(int i,string s){
    if (i >= s.size()/2){
        return true;
    }
    if (s[i] != s[s.size() - i - 1]){
        return false;
    }
    return palindrome_string(i+1, s);
}
int main(){
    int a[] = {1,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    // reverse_array(0, n, a);
    // reverse_array_one_var(n, a);
    // reverse_array_one_var_2(0, a, n);
    // for (int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    palindrome_string(0, "madam") ? cout << "Palindrome" : cout << "Not Palindrome";
    return 0;
} 