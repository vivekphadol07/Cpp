#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr , int target){
    int st = 0, end = arr.size() - 1;
    int currsum = 0;
    vector<int> ans;

    while( st < end){
        currsum = arr[st] + arr[end];
        if(currsum == target){
            ans.push_back(arr[st]);
            ans.push_back(arr[end]);
            return ans;
        }
        else if( currsum > target){
            end--;
        }
        else{
            st++;
        }
    }
}
 
int main(){
    vector<int> arr = {2, 7, 11, 12, 15};
    vector<int> ans = pairSum(arr , 9);
    cout<<"[ "<<ans[0]<<" , "<<ans[1]<<" ]";
    return 0;
}