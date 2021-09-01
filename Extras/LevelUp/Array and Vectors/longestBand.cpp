#include<bits/stdc++.h>
using namespace std;


int longest_band(vector<int> arr){
    int n = arr.size();
    if(n<=1){
        return n;
    }
    int longB = 1;
    int curB = 1;
    sort(arr.begin(), arr.end());
    for(int i=1; i<n; i++){
        if((arr[i-1]==arr[i] && arr[i]!=0) or arr[i]-arr[i-1]==1){
            curB++;
        }else{
            longB = max(longB, curB);
            curB=1;
        }
        longB = max(longB, curB);
    }

    return longB;
}

int main(){
    vector<int> v = {1,2,0,1};  

    // vector<int> v = {1,9,3,0,18,5,2,4,10,7,12,6};
    cout << longest_band(v);

    return 0;
}



