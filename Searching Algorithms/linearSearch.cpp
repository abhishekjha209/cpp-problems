#include<bits/stdc++.h>
using namespace std;

int linearSearch(int* arr, int nSize, int itemToSearch){
    int elemFoundAt = -1;
    for(int i=0; i<nSize; i++){
        if(arr[i]==itemToSearch){
            elemFoundAt = i;
            break;
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
    
    cout << "Search Result: " << linearSearch(arr, nSize, itemToSearch) << endl;
    return 0;
}