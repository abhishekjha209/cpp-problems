#include<bits/stdc++.h>
using namespace std;

//O(N^2)
void bruteforce(int* arr, int n, int S){
    for (int i = 0; i < n; i++)
    {
        int curSum = 0;

        for (int j = i; j < n; j++)
        {
            curSum += arr[j];
            if(curSum==S){
                cout << "Sum found " << i << " " <<j << endl;
                break;
            }
        }

    }
}
/* twoPointers
void twoPointers(int* arr, int n, int S){
    int st=-1; //sol
    int en=-1; //sol
    int sum=0;
    int i,j=0;
    while(j<n){
        sum+=arr[j];
        if(arr[j]<=S){
            j++;
        }else{
            j++;
            break;
        }
    }
    if(sum==S){
        cout << "The index are following: " << i << " " << j-1 << endl;
        return;
    }
    while(j<n){
        sum+=arr[j];
        while(S<sum){
            sum-=arr[i];
            i++;
        }
        if(sum==S){
            cout << "The index are following: " << i << " " << j << endl;
        }
        j++;
    }  

    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int S;
    cin >> S;
    twoPointers(arr, n, S);
    
}

*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Type the n of array further the array elements:\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int curSum=0;
    int st=0;
    int end=0;
    while(st<n){
        if(end>n){
            curSum=0;
            st++;
            end=st;
        }
        if(curSum==sum){
            cout<<"The mentioned sun was found from index "<<st<<" to "<<end-1<<endl;
            break;
        }else{
            curSum+=a[end];
        }
        end++;
    }
    if(end>n){
        cout<<"Oops! the sum was not found in any subarray.";
    }
    return 0;
}
