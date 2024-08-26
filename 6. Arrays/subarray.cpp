/*Print the subarray
Time complexity = O(n^3)*/ 

#include<iostream>
using namespace std;

void subArray(int n , int arr[]){
    for(int start = 0 ; start < n ; start++){ // loop run n time's
        for(int end = start ; end < n ; end++){ // loop run n time's
            for(int i = start ; i <= end ; i++){ // loop run n time's
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    
    subArray(n , arr);
}