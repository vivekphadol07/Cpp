#include<iostream>
using namespace std;

int prime(int n){
    for(int i = 2 ; i <= n ; i++){
        int cur = i;
        bool val = true;
        for(int j = 2 ; j <= cur-1 ; j++){
            if( cur % j == 0){
                val = false;
            }
        }
        if(val == true){
            cout<<cur<<" ";
        }  
    } 
}

int main(){
    prime( 10);
    return 0;
}