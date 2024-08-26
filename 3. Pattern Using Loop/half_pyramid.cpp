#include<iostream>
using namespace std;

int main(){
    int a = 1;
    for(int i = 1; i <= 4 ; i++ ){
        for(int j = 1 ; j <= a; j++){  
            cout<<j<<" ";  
        }
        cout<<endl;
        a++;
    }
    return 0;
}