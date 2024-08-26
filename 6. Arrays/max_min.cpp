#include<iostream>
using namespace std;

int main(){
    int arr[5]={56, 78, 90 , 42, 34};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int min = arr[0];

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int j = 0 ; j < n ; j++){
        if(arr[j] < min){
            min = arr[j];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}