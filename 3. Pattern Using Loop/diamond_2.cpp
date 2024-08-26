#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout<<" ";
        }
        for(int j = 1; j <= 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int a = n;
    for(int i = 0 ; i <= n-1 ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<" ";
        }
        for(int j = 2*a -1  ; j > 0 ; j--){
            cout<<"*"; 
        }
        cout<<endl;
        a--;
    }

}