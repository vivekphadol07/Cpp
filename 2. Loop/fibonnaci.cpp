#include<iostream>
using namespace std;

int main(){
    int n = 10; 
    int a = 0, b = 1; 
    cout<< a << "\t" << b << "\t"; 

    for(int i=2; i <= n; i++) { 
        int c = a + b; 
        cout << c << "\t"; 
        a = b; 
        b = c; 
    } 
    return 0;
}