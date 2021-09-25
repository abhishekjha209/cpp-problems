#include<bits/stdc++.h>
using namespace std;

void selectionSort(int* arr, int n){
    for(int pos=0; pos<n; pos++){
        // int curItem = arr[pos];
        int min_position = pos;
        for(int j = pos; j<n; j++){
            if(arr[j] < arr[min_position]){
                min_position = j;
            }
        }
        swap(arr[min_position], arr[pos]);
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

    selectionSort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}