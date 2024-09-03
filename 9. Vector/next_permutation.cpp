/*A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of 
arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically 
greater permutation of its integer. More formally, if all the permutations of 
the array are sorted in one container according to their lexicographical order, 
then the next permutation of that array is the permutation that follows it in the sorted container.
If such arrangement is not possible, the array must be rearranged as the lowest possible order
(i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nextPermutation(vector<int>& nums) {
        int idx1 = -1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                cout<<idx1<<endl;
                break;
            }
        }
        if(idx1 == -1){
            reverse(nums.begin(),nums.end());
        }else{
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    cout<<idx2<<endl;
                    break;
                }
            }
            swap(nums[idx1],nums[idx2]);
            sort(nums.begin()+idx1+1,nums.end());
        }
        return nums;
    }
 
int main(){
    //vector<int> nums = {1, 2, 3}; // [1 , 3, 2]
    //vector<int> nums = {3, 2, 1}; // [1 , 2, 3]
    //vector<int> nums = { 2, 3, 1}; // [3 , 1, 2]
    vector<int> nums ={1, 3, 2};    // [2, 1, 3]
    vector<int> ans = nextPermutation(nums);
    cout<<"[";
    for( int n : ans){
        cout<<n<<",";
    }
    cout<<"]";
    return 0;
}