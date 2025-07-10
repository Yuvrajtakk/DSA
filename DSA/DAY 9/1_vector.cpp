#include <iostream>
#include <vector>
using namespace std;

int main(){
    // trying different ways to make vectors
    vector<int> v1; 
    vector<int> v2 = {1,2,5};
    vector<int> v3(3, 10);
    vector<char> v4 = {'a','b','c'};
    
    cout << "v1 size: " << v1.size() << endl;
    cout << "v2 size: " << v2.size() << endl;
    cout << "v3 size: " << v3.size() << endl;
    cout << "v4 size: " << v4.size() << endl;
    
    // checking what's inside
    cout << v2[0] << endl;
    cout << v2[1] << endl;
    cout << v3[0] << endl;
    cout << v3[1] << endl;
    
    // printing all elements
    for (int i : v2) {
        cout << i << " ";
    }
    cout << endl;
    
    for (char c : v4) {
        cout << c << " ";
    }
    cout << endl;
    
    // let me try changing values
    v2[0] = 99;
    cout << "after change: " << v2[0] << endl;
    
    // testing with other types
    vector<double> prices = {12.5, 25.99, 8.75};
    cout << "price: " << prices[1] << endl;
    
    // bigger vector
    vector<int> big(100, 5);
    cout << "big vector size: " << big.size() << endl;
    cout << "element 50: " << big[50] << endl;
    
    // empty check
    if (v1.empty()) {
        cout << "v1 is empty" << endl;
    }
    
    // more loop practice
    for (int i = 0; i < v3.size(); i++) {
        cout << "index " << i << ": " << v3[i] << endl;
    }
    
    return 0;
}