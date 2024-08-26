#include<iostream>
using namespace std;

int main(){
    int a = 1;
    char ch = 'A';
    for(int i = 1; i <= 4 ; i++ ){
        for(int j = 1;   j <= a; j++){  
            cout<<ch<<" ";
            ch++  ;
        }
        cout<<endl;
        a++;
    }
    return 0;
}