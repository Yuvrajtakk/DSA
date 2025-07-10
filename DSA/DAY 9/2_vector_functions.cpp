#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    
    // let's see what happens when we add elements
    cout << "empty vector - size: " << vec.size() << " capacity: " << vec.capacity() << endl;
    
    vec.push_back(0);
    cout << "after 1 element - size: " << vec.size() << " capacity: " << vec.capacity() << endl;
    
    vec.push_back(1);
    cout << "after 2 elements - size: " << vec.size() << " capacity: " << vec.capacity() << endl;
    
    vec.push_back(2);
    cout << "after 3 elements - size: " << vec.size() << " capacity: " << vec.capacity() << endl;
    
    vec.push_back(3);
    cout << "after 4 elements - size: " << vec.size() << " capacity: " << vec.capacity() << endl;
    
    vec.push_back(4);
    cout << "after 5 elements - size: " << vec.size() << " capacity: " << vec.capacity() << endl;
    
    // adding more to see what happens
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    cout << "after 9 elements - size: " << vec.size() << " capacity: " << vec.capacity() << endl;
    
    // checking what's inside
    cout << "elements: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    
    // trying with different values
    vector<int> v2;
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);
    cout << "v2 size: " << v2.size() << " capacity: " << v2.capacity() << endl;
    
    // what about strings?
    vector<string> words;
    words.push_back("hello");
    words.push_back("world");
    cout << "words size: " << words.size() << " capacity: " << words.capacity() << endl;
    
    // adding a lot at once
    vector<int> v3;
    for (int i = 0; i < 20; i++) {
        v3.push_back(i);
        if (i % 5 == 0) {
            cout << "i=" << i << " size: " << v3.size() << " capacity: " << v3.capacity() << endl;
        }
    }
    
    return 0;
}