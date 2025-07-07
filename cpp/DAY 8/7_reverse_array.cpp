#include <iostream>
using namespace std;

int reverseArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] =  arr[size - i - 1];
    }
}

int reverse_Array(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        // Swap the elements at start and end
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        // Move towards the middle
        start++;
        end--;
    }
    return 0;
}

int main() {
    int arr[5] = {80,40,60,30,22};
    int size = 5;
    cout<<"Reversed array:" <<endl;
    reverseArray(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}