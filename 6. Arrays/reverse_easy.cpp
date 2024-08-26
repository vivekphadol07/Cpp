#include<iostream>
using namespace std;

void reverse(int n ,int arr[]){
    int temp;
    int st = 0 , end = n-1;
    while (st < end){
        swap(arr[st],arr[end]);
        st++;
        end--;
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