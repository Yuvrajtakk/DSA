#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if (target == arr[i]) {
            cout << "The " << target << " is located at " << i+1 << endl;
            return i;
        }
    }
    cout << "Target does not exist" << endl;
    return -1;
}

int main() {
    int arr[5] = {80,40,60,30,22};
    int size = 5;
    int target = 22;
    linear_search(arr, size, target);


    return 0;
}