/* Finding sum of each subarray and finding the largest sum */
#include<iostream>
using namespace std;

int sumof_each_subarrays(int*arr, int n){

    int largest_sum = 0;

    for(int i=0; i<n; i++){ // starting point of subarray
        for(int j=i; j<n; j++){ // ending point of subarray.

            int sum = 0;
            // Now looping through the entire sub array and recording its sum.
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            // cout << sum << endl;
            largest_sum = max(largest_sum, sum);
        }
    }
    return largest_sum;
}


int main(){
    //Array Containing 
	int arr[] = {10,20,30,40,50,60};
	int n = sizeof(arr)/sizeof(int);

    int largest_sum = sumof_each_subarrays(arr, n);
    cout << largest_sum << endl;

    return 0;
}