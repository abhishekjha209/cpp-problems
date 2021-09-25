#include<iostream>
#include<vector>
using namespace std;


int largestElement(vector<int> arr) {
    int largest = arr[0];
    for(int i=0; i<arr.size(); i++){
        largest = max(largest, arr[i]);
    }
    return largest;
}


int main(){
    vector<int> arr = {1, -2, 3, 4, 4, -2}; 
    cout << largestElement(arr);
    return 0;
}