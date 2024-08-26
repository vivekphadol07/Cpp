#include<iostream>
using namespace std;

int main(){
    int a = 1;
    for(int i = 1; i <= 4 ; i++ ){
        char star ='*';
        for(int j = 1 ; j <= a; j++){
            cout<<star<<" ";
        }
        cout<<endl;
        a++;
    }
    return 0;
}