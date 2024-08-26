#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= i ; j++){
            cout<<"*";
        }
        for(int j = 1 ; j <= 2*(n-i) ; j++){
            cout<<" ";
        }
        for(int j = 1; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int a = n;
    for(int i = n ; i >= 0 ; i--){
        for(int j = n ; j > 0 ; j--){
            cout<<"*";
        }
        for(int j = 1 ; j <= 2*(a - i); j++ ){
            cout<<" ";
        }
        for(int j = n ; j > 0 ; j--){
            cout<<"*";
        }
        cout<<endl;
        n--;
    }
}