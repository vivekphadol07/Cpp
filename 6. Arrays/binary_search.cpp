//binary search
#include<iostream>
using namespace std;

int binary_search(int n ,int arr[],int key){
    int st = 0 , end = n-1;
    while (st <= n){
        int mid = (st + end)/2;
        if(arr[mid] == key){
            return mid; // key found
        }
        else if(arr[mid] < key){
            st = mid +1; // search in 2nd half of array
        }
        else{
            end = mid - 1; // search in 1st half of array
        }
    }
    return -1; // No valid index for give value of key
}

int main(){
    int arr[] ={1, 2, 3, 4, 5, 7, 9, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(int);
    cout<<"key found at Index : "<<binary_search(n, arr,12)<<endl;
    

}