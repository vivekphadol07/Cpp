/*
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

Example 1:
Input: nums = {1,2,2,4}
Output: [2,3]
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) { 
    vector<int> ans;
    int n = nums.size();
    vector<bool> isPresent(n+1, false);
    for(int i=0; i<n; i++) { 
        if(isPresent[nums[i]]) {
        ans.push_back(nums[i]);
        }
        isPresent[nums[i]] = true;
    }
    for(int i=1; i<isPresent.size(); i++){ 
        if(!isPresent[i]) {
            ans.push_back(i); 
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 2, 5};
    vector<int> ans = findErrorNums(nums);
    cout<<"[";
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<",";
    }
    cout<<"]";
    return 0;
}