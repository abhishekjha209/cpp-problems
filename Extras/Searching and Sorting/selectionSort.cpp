#include<bits/stdc++.h>
using namespace std;

/*
Selection Sort in nutshell:
--------------------------
Find the smallest element in the unsorted part of the array and than swap it with the "first unsorted element" of that array. 

It works in left to right fashion.
i.e. Sorted elements are in left and unsorted ones on right.
*/

void selectionSort(int *arr, int nSize){
    for(int i=0; i<nSize; i++){
        int indexOfSmallestElement = i;
        for(int j=i+1; j<nSize; j++){
            if(arr[j]<arr[indexOfSmallestElement]){
                indexOfSmallestElement = j;
            }
        }
        swap(arr[i], arr[indexOfSmallestElement]); 
    }
}

int main(){
    //input
    int nSize;
    cin >> nSize;
    int arr[nSize];
    for(int i=0; i<nSize; i++){
        cin >> arr[i];
    }

    selectionSort(arr, nSize);

    //output
    cout << "Sorted order is:\n";
    for(int i=0; i<nSize; i++){
        cout << arr[i] << " ";
    }
    return 0;
}