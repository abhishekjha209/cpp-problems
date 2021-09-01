#include<bits/stdc++.h>
using namespace std;

void sumOfEachSubArray(int* arr, int n){
    for (int i = 0; i < n; i++){
        int currSum = 0;
        for (int j = i; j < n; j++){   
            currSum += arr[j];
            cout << currSum << endl;
        }
    }
}

int main(){
    int nSize;
    cin >> nSize;
    int arr[nSize];
    for(int i=0; i<nSize; i++){
        cin >> arr[i];
    }
    sumOfEachSubArray(arr, nSize);
}