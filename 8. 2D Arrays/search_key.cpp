#include<iostream>
using namespace std;

// Brute force Approch
int search_key1(int arr[][4] , int n , int m , int key){ // Time Complexity = O(n*m)
    for(int i = 0 ; i < n ; i++){ // loop run for n times
        for(int j = 0 ; j < m ; j++){ //loop run for m times
            if(arr[i][j] == key){
                cout<<"found at ("<<i<<","<<j<<")\n";
                return 1;
            }
        }
    }    
    return 0;
}

// Binary search
bool search_key2(int n , int m, int arr[][4] , int key){ // Time Complexity = O(n*log(m))
    for(int i = 0 ; i < n ; i++){ // loop run for n times
        int st = 0 , end = m-1;
        while(st <= end){ // loop run for log(m) times
            int mid = (st + end)/2;
            if(arr[i][mid] == key){
                cout<<"found at ("<<st<<","<<end<<")\n";
                return true;
            }
            else if(arr[i][mid] < key ){
                st = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return 0;
}
// Staircase Search
int search_key3(int n , int m, int arr[][4] , int key){ // Time Complexity = O(n+m) {(n>>>m = O(n)) ; (m>>>n = O(m))} 
    int st = 0 , end = m-1;
    while(st < n && end >= 0){
        if(arr[st][end] == key){
            cout<<"found at ("<<st<<","<<end<<")\n";
            return 1;
        }
        else if(arr[st][end] < key){
            st++;
        }
        else{
            end--;
        }
    }
    cout<<"NOT FOUND\n";
    return 0;
}

int main(){
    int arr[4][4] = {{1, 2, 3, 4} , {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

   // cout<<search_key1(arr, 4 , 4 , 20);
   // cout<<search_key2( 4 , 4 , arr, 16);
    cout<<search_key3( 4 , 4 , arr, 16);
}
