/* Calculate largest subarray sum */
#include<iostream>
using namespace std;

// O(N^3) BruteForce approach
int largest_subarr_sum1(int*arr, int n){

    int largest_sum = 0;

    for(int i=0; i<n; i++){ // starting point of subarray
        for(int j=i; j<n; j++){ // ending point of subarray.

            int curSum = 0;
            // Now looping through the entire sub array and recording its sum.
            for(int k=i; k<=j; k++){
                curSum+=arr[k];
            }
            // cout << sum << endl;
            largest_sum = max(largest_sum, curSum);
        }
    }

    return largest_sum;
}

// O(N^2) Storing the previous sum 
int largest_subarr_sum2(int*arr, int n){

    int largest_sum = 0;

    for(int i=0; i<n; i++){ // starting point of subarray
        int curSum = 0;
        for(int j=i; j<n; j++){ // ending point of subarray.
            curSum += arr[j];
            // cout << curSum << endl;
            largest_sum = max(largest_sum,curSum);
        }
    }

    return largest_sum;
}

// O(N^2) Storing prefix arr, and calculating sum for each subarray.
int largest_subarr_sum3(int*arr, int n){
    
    // generate prefix arr.
    int prefix[n];
    prefix[0] = arr[0];
	for(int i=1;i<n;i++){
		prefix[i] = prefix[i-1] + arr[i];
	}

    int largest_sum = 0;
	for(int i=0;i<n;i++){
		for(int j=i; j<n; j++){
			int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j]; 

			//put a check is subarraySum > largest_sum
			largest_sum = max(largest_sum,subarraySum);

		}
	}

	return largest_sum;
}


int main(){
    //Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

    int largest_sum = largest_subarr_sum2(arr, n);
    cout << "Largest sum: " << largest_sum << endl;

    return 0;
}