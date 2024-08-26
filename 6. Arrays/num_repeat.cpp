/*Given an integer array nums, return true if any value appears at least 
twice in the array, and return false if every element is distinct*/
#include<iostream>
using namespace std;

int repeat(int n , int*arr , int key){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == key){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    int arr[] = { 1, 2, 3, 1, 3, 1, 3 , 4, 5, 6 , 2};
    int n = sizeof(arr)/sizeof(int);
    cout<<repeat(n , arr , 2);
}