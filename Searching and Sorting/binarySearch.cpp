#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* arr, int nSize, int itemToSearch){
    int leftIdx = 0;
    int rightIdx = nSize-1;
    int elemFoundAt = -1;
    
    while(leftIdx<=rightIdx){
        int midIdx = (leftIdx+rightIdx + 1)/2;
        if(arr[midIdx]==itemToSearch){
            elemFoundAt = midIdx;
            break;
        }
        else if(itemToSearch < arr[midIdx]){
            rightIdx = midIdx-1;
        }
        else{
            leftIdx = midIdx+1;
        }
    }
    return elemFoundAt;
}

int main(){
    //arr input
    int nSize;
    cin >> nSize;
    int arr[nSize];
    for(int i=0; i<nSize; i++){
        cin >> arr[i];
    }
    
    int itemToSearch;
    cin >> itemToSearch;
    
    //output
    cout << "Search Result: " << binarySearch(arr, nSize, itemToSearch) << endl;
    return 0;
}