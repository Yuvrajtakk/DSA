#include <iostream>
using namespace std;

int reverseArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] ==  arr[size - i - 1];
        }
}

int main() {
    int arr[5] = {80,40,60,30,22};
    int size = 5;
    reverseArray(arr, size);
    printf("Reversed array: ");
    for(int i = 0; i < size; i++){  
        printf("%d ", arr[i]);
    }


    return 0;
}