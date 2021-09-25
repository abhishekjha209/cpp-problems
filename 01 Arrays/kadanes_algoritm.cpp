#include<iostream>
#include<climits>
using namespace std;

int maximum_subarray_sum(int nums[],int n){
		int largest_sum = INT_MIN;
		int running_sum = 0;

	for(int i=0; i<n; i++){
		// update running sum on the go.
		running_sum = running_sum + nums[i];

		// update largest_sum sum, if running_sum is larger.
		largest_sum = max(largest_sum, running_sum); 

		/*  if running sum is less than 0 then, make it zero, 
			and don't include it in further solution. */
		if(running_sum < 0){
			running_sum = 0;
		} 
	}

	return largest_sum; 
}


int main(){
	//Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<< maximum_subarray_sum(arr,n) <<endl;

	return 0;
}