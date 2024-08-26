// with extra space
#include<iostream>
using namespace std;

void reverse(int n ,int arr[]){
    int arr_1[n];
     for(int i = 0; i < n ; i++){
        arr_1[i] = arr[n-i-1]; 
     }
     for(int i = 0; i<n ; i++){
        arr[i]=arr_1[i];
     }
     
}
void printarr(int n,int arr[]){
    for(int i= 0; i < n ; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[] ={1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    reverse(n, arr);
    printarr(n,arr);

}