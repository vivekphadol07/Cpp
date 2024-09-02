/*
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in
pairs whereas the other two number occur exactly once and are distinct. 
Find the other two numbers. Return in increasing order.

Example 1:

Input: 
N = 2
nums[] = {1, 2, 3, 2, 1, 4}

Output: 3 4 

Explanation:
3 and 4 occur exactly once.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nonRepeating(vector<int> nums ){
    sort(nums.begin() , nums.end());
    vector<int> ans;
    int temp ;
    for(int i = 0 ; i < nums.size() ; i++){
        if((nums[i] ^ nums[i+1]) == 0){
            i++;
        }
        else{
            if(nums[i] >= 1){
                ans.push_back(nums[i]);
            }
        }
    }
    return ans;
}
 
int main(){
    vector<int> nums = {1, 2, 3, 2, 1, 4  };
    vector<int> ans = nonRepeating(nums);
    for(int n : ans){
        cout<<n<<"\t";
    }
    return 0;
}