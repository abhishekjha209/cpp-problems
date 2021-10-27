#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int x  = arr[s];

    int count = 0;
    for(int i=s; i<=e; i++){
        if(arr[i]<x){
            count++;
        }
    }

    int p =  s + count; // pivot index

    swap(arr[s], arr[p]);

    int i = s;
    int j = e;

    while (i<p and p<j){
        if(arr[i] < arr[p]){
            i++;
        }else if(arr[j]>arr[p]){
            j--;
        }
        else{
            swap(arr[j], arr[i]);
        }
    }
    
    return p;
}


void quicksort(vector<int> &arr, int s, int e){
    // base condition
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    // recurive calls
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e );
}


int main(){
    vector<int> v = {1,2,34,4,3,2,2,35};

    quicksort(v, 0, v.size()-1);

    for(auto i:v){
        cout <<  i << " "; 
    }

    return 0;
}