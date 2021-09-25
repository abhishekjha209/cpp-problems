#include<bits/stdc++.h>
using namespace std;

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
            ans = arr[l];
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