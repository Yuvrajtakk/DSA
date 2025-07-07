#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {30, 50, 70, 10, 60};
    // int largestNum = arr[0];
    // int smallestNum = arr[0];
    // for (int i = 1; i < size; i++)
    // {
    //     if (largestNum < arr[i])
    //     {
    //         largestNum = arr[i];
    //     }
    //     if (smallestNum > arr[i])
    //     {
    //         smallestNum = arr[i];
    //     }
    int smallestNum = INT_MAX;
    int largestNum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (smallestNum > arr[i])
        {
            smallestNum = arr[i];
        }
        if (largestNum < arr[i])
        {
            largestNum = arr[i];
        }

    }

    
    cout << "The largest number in Array is :" << largestNum<<endl;
    cout << "The smallest number in Array is :" << smallestNum<<endl;
    
    for (int i = 0; i < size; i++){
        if (largestNum == arr[i]){
            cout<<"The index of largerst number is :"<< i <<endl;
        }
        if (smallestNum == arr[i]){
            cout<<"The index of smallest number is :"<< i <<endl;
        }

    }
    return 0;
}               