#include <iostream>
using namespace std;

// Sum and product of array elements
int sumAndProduct(int arr[], int n) {
    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum: " << sum << ", Product: " << product << endl;
    return sum;
}

// Swap the min and max elements of array
int swapMinMax(int arr[], int n) {
    if (n == 0) return -1; // Handle empty array case
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }
    swap(arr[minIndex], arr[maxIndex]);
    return 0;
}

// Print all unique values in array
int uniqueValues(int arr[], int n) {
    if (n == 0) return -1; // Handle empty array case
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}


// Print intersection of two arrays
int intersection(int arr1[], int n1, int arr2[], int n2) {
    if (n1 == 0 || n2 == 0) return -1; // Handle empty array case
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // Avoid printing duplicates from arr1
            }
        }
    }
    cout << endl;
    return 0;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 2, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 4, 4, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Sum and Product
    sumAndProduct(arr1, n1);

    // Swap Min and Max
    swapMinMax(arr1, n1);
    cout << "After swapping min and max, array: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Print Unique
    cout << "The unique values in the array are: ";
    uniqueValues(arr1, n1);

    // Print Intersection
    cout << "The intersection of two arrays is: ";
    intersection(arr1, n1, arr2, n2);

    return 0;
}
