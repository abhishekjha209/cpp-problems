#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> kRotate(vector<int> &arr, int k){
    int it = 0;
    while (it<k){
        int last = arr[arr.size()-1];
        arr.pop_back();
        arr.insert(arr.begin(),last);
        it++;
    }
    return arr;
}


int main(){
    vector<int> arr = {1,3,5,7,9};
    int k = 2;
    kRotate(arr, k);
    
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}
