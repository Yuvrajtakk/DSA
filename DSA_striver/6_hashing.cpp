#include <bits/stdc++.h>
using namespace std;
int GLOBAL_HASH[10000000]; //local array can only store 10^6 elements but global array can store 10^7 elements. 

int function (int a[],int search){
    int count = 0;
    for(int i=0;i<5;i++){
        if (a[i] == search){
            count++;
        }
    }
    return count;
}
//hashing - prestoring and fetching data in O(1) time complexity
int hashing(int a[], int search){
    int hash[100] = {0}; //assuming the range of numbers is 0-99
    for(int i=0;i<5;i++){
        hash[a[i]]++;
    }
    return hash[search];
}
int lower_character_hashing(string s, char search){
    int hash[26] = {0}; //assuming only lowercase letters
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++; //hashing the characters by their position in the alphabet (a=0, b=1, ..., z=25)
    }
    return hash[search-'a']; //fetching the count of the search character by its position in the alphabet
}
int all_characters_hashing(string s, char search){
    int hash[256] = {0}; //assuming ASCII characters
    for(int i=0;i<s.length();i++){
        hash[s[i]]++; //hashing the characters by their ASCII value
    }
    return hash[search]; //fetching the count of the search character by its ASCII value
}
int map_hashing(int a[], int query, int size){
    map<int,int>mpp;
    for (int i = 0; i < size; i++){
        mpp[a[i]]++;
    }
    // iterate through the map so check whatever its sorted or not
    for (auto it : mpp){
        cout << it.first << " " << it.second << endl; //output: 1 3 (1 is the key and 3 is the value) and 2 2 (2 is the key and 2 is the value) ; sorted manner 
    }
    // map<char,int>mpp; //if we want to store characters as keys and their counts as values
    return mpp[query];
}
int unordered_map_hashing(int a[], int query, int size){
    unordered_map<int,int>mpp; //unordered map does not maintain any order of keys
    for (int i = 0; i < size; i++){
        mpp[a[i]]++;
    }
    // iterate through the unordered map to check whatever its sorted or not
    for (auto it : mpp){
        cout << it.first << " " << it.second << endl; //output: 1 3 (1 is the key and 3 is the value) and 2 2 (2 is the key and 2 is the value) ; unsorted manner 
    }
    return mpp[query];
}



int main(){
    cout<<"unordered Hashing in c++"<<endl;
    int a[5] = {10,2,2,1,1};
    // cout << function(a,1) << endl;
    // cout << hashing(a,1);
    // cout << lower_character_hashing("hello world", 'o') << endl;
    // cout << all_characters_hashing("Hello Old World", 'O') << endl;
    cout << unordered_map_hashing(a, 1, 5) << endl;
    return 0;
}