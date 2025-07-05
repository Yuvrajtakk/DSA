#include <iostream>
using namespace std;

int binToDecimal(int decNum){
        int pow = 1,ans = 0;
        while(decNum > 0){
            int rem = decNum % 2;
            decNum /= 2;
            ans += (rem * pow);
            pow = pow*10;
        }
        return ans;
}

int main(){
    int decNum, ans = 0;
    cout<<"Enter the Decimal number";
    cin>>decNum;
    cout<<"The binary number :" << binToDecimal(decNum) << endl;

    for(int i= 0; i <= 10; i++){
        cout << "Decimal: " << i << " Binary: " << binToDecimal(i) << endl;
    }
    return 0;
}