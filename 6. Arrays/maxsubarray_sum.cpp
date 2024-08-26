//Print MAximum Subarray Sum using Brute force Approach

#include<iostream>
using namespace std;

void maxSubarr_Sum(int n,int *arr){ // Time Complexity = O(n^3)
    int maxSum = INT32_MIN;
    for(int start = 0 ; start < n ; start++){ // loop run for n time
        for(int end = start ; end < n ; end++){ // loop run for n time
            int currSum = 0;
            for(int i = start ; i <= end ; i++){ // loop run for n time
                currSum += arr[i];
            }
            cout<<currSum<<", ";
            maxSum = max(maxSum , currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray sum = "<<maxSum<<endl;
}

void maxSubarr_Sum2(int n,int *arr){ // Time Complexity = O(n^2)
    int maxSum = INT32_MIN;
    for(int start = 0 ; start < n ; start++){ // loop run for n time
        int currSum = 0;
        for(int end = start ; end < n ; end++){ // loop run for n time
             currSum += arr[end];
            maxSum = max(maxSum , currSum);
        }
    }
    cout<<"Maximum Subarray sum = "<<maxSum<<endl;
}

int main(){
    int arr[] = {3 , 4, -7 , 2, -3, 10, 12, -1};
    int n = sizeof(arr)/sizeof(int);

    //maxSubarr_Sum(n , arr);
    maxSubarr_Sum2(n,arr);
}