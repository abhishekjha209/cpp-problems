#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int largestElement(vector<int> arr){
    int largest = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int largestElement2(vector<int> arr){
    return *max_element(arr.begin(), arr.end()); 
        //returns the iterator to largest element in the vector
}

int main(){
    vector<int> arr = {1, -2, 3, 4, 42, -2}; 
    cout << largestElement2(arr);
    return 0;
}