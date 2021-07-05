#include<bits/stdc++.h>
using namespace std;

// TC: O(N^2)
// Brute force
vector<int> solve1(vector<int> &arr, int tS){
    int n = arr.size();
    vector<int> result;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==tS && i!=j){
                result.push_back(arr[i]);
                result.push_back(arr[j]);
                return result;
            }
        }
    }
    return result;
}

// TC: O(Nlogn) + (N*logN)) ==> NlogN 
// Sort the array, Select a number, then perform binary search in rest of the part.
vector<int> solve2(vector<int> &arr, int tS){
    sort(arr.begin(), arr.end());
    vector<int> result;
    for(int i=0; i<arr.size(); i++){
        bool isTrue = binary_search(arr.begin()+i+1, arr.end(), tS-arr[i]);
        if(isTrue){
                result.push_back(arr[i]);
                result.push_back(tS-arr[i]);
                return result;
        }
    }
    return result;
}


// TC: O(N) 
// Used Set to trade time complexity over space
vector<int> solve3(vector<int> &arr, int tS){
    vector<int> result;
    unordered_set<int> s;
    
    for(int i=0; i<arr.size(); i++){
        if (s.find(tS-arr[i])!=s.end()){ 
            result.push_back(arr[i]);
            result.push_back(tS-arr[i]);
            return result;
        }else{
            s.insert(arr[i]);
        }
    }
    return result;
}

// boiler-plate
int main(){
    vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
    int targetSum = 4;
    
    vector<int> p = solve1(arr, targetSum);
    if(!p.empty())
        cout << p[0] << " " << p[1];
    return 0;
}