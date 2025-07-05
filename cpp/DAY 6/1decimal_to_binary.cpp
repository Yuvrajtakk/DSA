#include <iostream>
using namespace std;

int main() {
    int decNum;
    int pow = 1;
    cout<<"Enter the Decimal number";
    cin>>decNum;
    int ans = 0;
    
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow = pow*10;
    
    }
    cout<<"The binary number :" <<ans<<endl;
    return 0;
}