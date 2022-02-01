#include<bits/stdc++.h>
using namespace std;

// Question in brief:

// Given an array of integers "arr"(sorted), and a integer "Val". 
// Implement a function to find lower bound of Val in "arr".
// If Val is not present in "arr", than lower bound of a given integer means element just smallar than Val.
// If Val is less than smallest element in "arr", then return -1 in that case.



// Function to find the lower bound of the element
int lowerBound(vector<int> arr, int Val) {
    int l = 0;
    int r = arr.size()-1;

    int ans = -1;

    while(l<=r){
        int mid = (l+r)/2;

        if(arr[mid]==Val){
            ans = Val;
            return ans;
        }else if(Val < arr[mid]){
            r = mid - 1;
        }else{
            ans = arr[l]; // arr[l] represents lower bound of Val, (before updating pointers for next iteration range)
            l = mid + 1;
        }
        
    }

    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,6};
    int val = 5;

    cout << lowerBound(arr, val);
    return 0;
}