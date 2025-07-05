#include <iostream>
using namespace std;

int binToDecimal(int binNum){
        int pow = 1,ans = 0;
        while (binNum > 0)
        {
            int rem = binNum % 10;
            binNum /= 10;
            ans += (rem * pow);
            pow *= 2;
        }
        return ans;
}

int main(){
    int binNum;
    cout<<"Enter the Binary number";
    cin>>binNum;
    cout<<"The Decimal number :" << binToDecimal(binNum) << endl;
    return 0;
}