#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSize = 1e6+2;
    int arr2[maxSize];
    for (int i = 0; i < maxSize; i++)
    {
        arr2[i]  = -1;
    }

    int minIdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr2[i]==-1){
            arr2[arr[i]] = i;
        }else{
            minIdx = min(minIdx, arr2[arr[i]]);
        }
    }

    if(minIdx==INT_MAX){
        cout << -1;
    }else{
        cout << minIdx << endl;
    }

}