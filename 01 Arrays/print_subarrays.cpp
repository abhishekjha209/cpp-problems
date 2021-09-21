#include<iostream>
using namespace std;

// Print all subarrays of given array.
void print_subarrays(int*arr, int n){
    for(int i=0; i<n; i++){  // starting point of the subarr
        for(int j=i; j<n; j++){ // ending point of the subarr
            
            /* for looping inside these subarrays */
            for(int k=i; k<=j; k++){
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main(){

    int arr[] = {10,20,30,40,50, 60};
    int n = sizeof(arr)/sizeof(int);

    print_subarrays(arr, n);

    return 0;
}