#include<iostream>
using namespace std;

//Problem : Print all pairs of element (should be non-symmetric).
void printPairs(int arr[],int n){

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			cout << arr[i] << " " << arr[j] << endl;
		}
		cout << endl;
	}

}

// NOTE:
/* for printing all possible pairs just initialise j value with 0 instead of i+1 */

int main(){
	//Array Containing 
	int arr[] = {10,20,30,40,50,60};
	int n = sizeof(arr)/sizeof(int);

	printPairs(arr,n);



	return 0;
}