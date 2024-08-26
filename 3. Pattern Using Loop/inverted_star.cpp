#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 1; i <= 4 ; i++ ){
        char star = '*';
        for(int j = 1 ; j <= n; j++){
            cout<<star<<" ";
        }
        cout<<endl;
        n--;
    }
    return 0;
}