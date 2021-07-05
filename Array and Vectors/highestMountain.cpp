#include<bits/stdc++.h>
using namespace std;

int highestMountain(vector<int> &arr){
    int n = arr.size();
    int largest_peak = INT_MIN;
    // position 0 and n-1 can never be peak.
    for(int i=1; i<=n-2;  /*i++*/ ){
        
        // check if arr[i] is peak or not.
        if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            int j=i;
            int count = 1;

            // count backwards (left)
            while(j>=1 && arr[j-1]<arr[j]){
                count++;
                j--;
            }

            // count forwards (right)
            while(i<n-1 && arr[i+1]<arr[i]){
                count++;
                i++;
            }
            largest_peak = max(largest_peak, count);
        }else{
            i++;
        }
    }
    return largest_peak;
}

int main(){
    vector<int> arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2, 4};
    int result = highestMountain(arr);
    cout << result;
    return 0;
}