/* Given an integer array nums, find a subarray that has the largest 
product, and return the product. The test cases are generated so that the answer will 
fit in a 32-bit integer. */

#include<iostream>
using namespace std;

void maxSubarr_product(int n,int *arr){ // Time Complexity = O(n^2)
    int maxProduct = INT32_MIN;
    for(int start = 0 ; start < n ; start++){ // loop run for n time
        int currProduct = 1;
        for(int end = start ; end < n ; end++){ // loop run for n time
             currProduct *= arr[end];
            maxProduct = max(maxProduct , currProduct);
        }
    }
    cout<<"Maximum Subarray Product = "<<maxProduct<<endl;
}

int maxSubarr_product2(int n , int *nums){ // Time Complexity = O(n)
    int max1 = nums[0]; 
    int min1 = nums[0]; 
    int ans = max1; 
 
    for (int i = 1; i < n ; i++) { // loop run for n times
        int curr = nums[i];  // curr = { 2 , -3 , 4 , 5}
 
        max1 = max(curr, max(max1*curr, min1*curr)); // max1 = {2, -3 , 4 ,20}
        min1 = min(curr, min(max1*curr, min1*curr)); // min1 = {2, -6 , -24 , -120 }
        ans = max(max1, ans); // ans = {2 , 2 , 4 , 20}
    }
    cout<<"Maximum Subarray Product = "<<ans<<endl; // 20
    return ans;
}

int main(){
    int arr[] = {1, 2, -3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    //maxSubarr_product(n,arr);
    maxSubarr_product2(n,arr);
}