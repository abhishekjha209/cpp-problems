#include<bits/stdc++.h>
using namespace std;

int maxTillI(int* arr, int nSize, int tillIthIndex){
    int mx = INT_MIN;
    for(int i=0; i<=tillIthIndex; i++){
        mx = max(mx,arr[i]);
    }
    return mx;
}

int main(){
    int nSize;
    cin >> nSize;
    int arr[nSize];
    for(int i=0; i<nSize; i++){
        cin >> arr[i];
    }

    int tillIthIndex;
    cin >> tillIthIndex;

    cout << maxTillI(arr, nSize, tillIthIndex);

    return 0;
}