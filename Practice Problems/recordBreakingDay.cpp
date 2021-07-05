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
        int sol = 0;     
        bool condn1=0;
        bool condn2=0;
        int prevmx = INT_MIN;
        for (int j = 0; j < n; j++){
            if(prevmx<arr[j]){
                condn1=true;
            }
            if(arr[j]>arr[j+1]){ 
                condn2=true;
            }
            if(j==n-1)  condn2=true;

            prevmx = max(arr[j],prevmx);
            if(condn1 && condn2){
                sol++;
            }
            condn1=false;
            condn2=false;
        }
        cout << "Case #" << i << ": " << sol << endl; 
    }
    return 0;
}