#include<bits/stdc++.h>
using namespace std;

// Question:
// Given a sorted array adn a number x, find the pair in array whose sum is closest to x.

pair<int, int> closestSum(vector<int> arr, int target_sum){
    int l = 0;
    int r = arr.size() - 1;

    int res_l, res_r;
    int diff = INT_MAX;

    while (l<r){
        int curDiff = abs(arr[l] + arr[r] - target_sum);

        if(curDiff < diff){
           res_l = l;
           res_r = r;
           diff = curDiff;
        }
 
        if (arr[l] + arr[r] > target_sum){
            r--;
        }
        else{
            l++;
        }
        
    }
    
    pair<int, int> p = {arr[res_l], arr[res_r]};
    return p; 
}

int main(){
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int val = 54;

    pair<int,int> p =  closestSum(arr, val);
    cout << p.first << " " << p.second;
    return 0;
}