#include<bits/stdc++.h>
using namespace std;

// O(N^3) Brute Force
vector< vector<int> > solve1(vector<int> &arr, int tS){
    int n = arr.size();
    vector< vector<int> > result;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==tS && i!=j && j!=k && i!=k){
                         vector<int> temp = {arr[i], arr[j], arr[k]};
                         result.push_back(temp);
    
                }
            }
        }
    }
    return result;
}


// (Nlogn + n^2) ==> O(N^2)
// Sort the array, pick the item and apply pair problem to rest of the part.
// Here sorting is the bottom neck of the solution, as it makes the 2 pointer approach work.
vector< vector<int> > solve3(vector<int> arr, int tS){
    int n = arr.size();
    vector< vector<int> > result;
    
    // sorting NlogN
    sort(arr.begin(), arr.end());

    for(int i=0; i<n-2; i++) {
        
        // two pointers O(N)
        int fP = i+1;
        int sP = n-1;
        while(fP<sP){
            if(arr[fP]+arr[sP]==tS-arr[i]){
                result.push_back({arr[i], arr[fP], arr[sP]});
                sP-=1;
                fP+=1;
            }else if(arr[fP]+arr[sP]>tS-arr[i]){
                sP-=1;
            }else{
                fP+=1;
            }
        }
    }
    return result;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,15};
    int targetSum = 18;
    
    vector< vector<int> > p = solve3(arr, targetSum);
    for(int i=0; i<p.size(); i++){
        for(auto it:p[i]){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}