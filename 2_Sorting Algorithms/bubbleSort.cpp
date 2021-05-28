#include<bits/stdc++.h>
using namespace std;

/*
Bubble Sort in nutshell:
--------------------------
Find the largest element between 2 contiguous memory cell and the large one amongst them will move towards the right/end like a bigger bubble moves to the top in still water.

It works in right to left fashion.
i.e. Sorted elements are on right side and unsorted ones on left.
*/

void bubbleSort(int *arr, int nSize){
    for(int i=0; i<nSize; i++){
        for(int j=0; j<nSize-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
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

    bubbleSort(arr, nSize);

    //output
    cout << "Sorted order is:\n";
    for(int i=0; i<nSize; i++){
        cout << arr[i] << " ";
    }
    return 0;
}