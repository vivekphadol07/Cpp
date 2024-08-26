#include<iostream>
using namespace std;

int prime(int n){
    bool val = true;
    if(n == 1 || n == 2){
        cout<<"its is a Composite number ";
    }
    else{
        for(int i = 2 ; i <= n-1 ; i++){
            if(n % i == 0){
                val = false;
            }
        }
        if(val == true){
        cout<<"Its is a Prime number";
        }
        else{
            cout<<"Not a prime number";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    prime(n);
    return 0;
}