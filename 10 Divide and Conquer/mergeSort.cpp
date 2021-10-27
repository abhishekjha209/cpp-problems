#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e){
    vector<int> temp;

    int mid = (s+e)/2;

    int i = s;
    int j = mid+1;

    // merge logic
    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=s){
        temp.push_back(arr[i++]);
    }

    while(j<=e){
        temp.push_back(arr[j++]);
    }

    // copying back to the orignal array.
    int k = 0;
    for(int m=s; m<=e; m++){
        arr[m] = temp[k++];
    }

}


void mergesort(vector<int> &arr, int s, int e){
    // base condition
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    // recursive calls
    mergesort(arr, s, mid);
    mergesort(arr, mid +1 , e);
    merge(arr, s, e ); 
}


int main(){
    vector<int> v = {1,2,34,4,3,2,2,35};

    mergesort(v, 0, v.size()-1);

    for(auto i:v){
        cout <<  i << " "; 
    }

    return 0;
}