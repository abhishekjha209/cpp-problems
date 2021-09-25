#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    
    for(int i=1; i<n; i++){
        int key = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]>key) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = key;
    }
}


int main(){
    //Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}