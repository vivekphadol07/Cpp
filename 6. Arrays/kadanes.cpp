//Print Maximum Subarray Sum using Kadane's Alogorithm.
#include<iostream>
using namespace std;

void maxSubarr_Sum(int n , int *arr){ //Time Complexity = O(n)
    int currSum = 0;
    int maxSum = INT32_MIN;
    for(int i = 0 ; i < n ; i++){ // Loop run for n times
        currSum += arr[i];
        maxSum = max(maxSum , currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Maximum Subarray Sum =  "<<maxSum<<endl;
}

int main(){
    int arr[] = {3 , 4, -7 , 2, -3, 10, 12, -1};
    int n = sizeof(arr)/sizeof(int);

    maxSubarr_Sum(n,arr);
}