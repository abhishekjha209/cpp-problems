#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }
        if(n>1){
            int sol = 2;
            int curLength = 2;
            int currDiff = arr[1]-arr[0];
            for (int j = 2; j < n; j++){
                if(arr[j]-arr[j-1]==currDiff){
                    curLength+=1;
                }else{
                    currDiff = arr[j]-arr[j-1];
                    curLength = 2;
                }
                sol = max(sol,curLength);
            }
            cout << "Case #" << i << ": " << sol << endl; 
        }else{
            cout << "Case #" << i << ": " << n << endl; 
        }
    }
    return 0;
}