#include<bits/stdc++.h>
using namespace std;

/*
Insertion Sort in nutshell:
--------------------------
Insert an element from unsorted array to its "correct position" in sorted array.
x------x------x
To, achieve the same, we move all the sorted items bigger than the "current item "one place furhter, and save the space for the correct position of "current item"

It works in left to right fashion.
i.e. Sorted elements are in left and unsorted ones on right.
*/

void insertionSort(int *arr, int nSize){
    for(int i=1; i<nSize; i++){
        int temp = arr[i];
        int j = i;
        while(arr[j-1]>temp and j>0){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
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

    insertionSort(arr, nSize);

    //output
    cout << "Sorted order is:\n";
    for(int i=0; i<nSize; i++){
        cout << arr[i] << " ";
    }
    return 0;
}