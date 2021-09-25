#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Using Kadanes 
int maxSubArray(vector<int> nums) {
         int largest_sum = INT_MIN;
         int running_sum = 0;

        for(int i=0; i<nums.size(); i++){
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
    vector<int> arr = {-2, -1};

    cout << maxSubArray(arr);
    return 0;
}
