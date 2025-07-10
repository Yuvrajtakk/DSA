#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    
    for(int val : nums) {
        ans ^= val;
    }
    
    return ans;
}

int main() {
    // test case 1
    vector<int> nums1 = {2, 2, 1};
    cout << "nums1 = {2, 2, 1}" << endl;
    cout << "single number: " << singleNumber(nums1) << endl;
    
    // test case 2
    vector<int> nums2 = {4, 1, 2, 1, 2};
    cout << "\nnums2 = {4, 1, 2, 1, 2}" << endl;
    cout << "single number: " << singleNumber(nums2) << endl;
    
    // test case 3
    vector<int> nums3 = {1};
    cout << "\nnums3 = {1}" << endl;
    cout << "single number: " << singleNumber(nums3) << endl;
    
    // test case 4
    vector<int> nums4 = {7, 3, 5, 3, 7};
    cout << "\nnums4 = {7, 3, 5, 3, 7}" << endl;
    cout << "single number: " << singleNumber(nums4) << endl;
    
    return 0;
}