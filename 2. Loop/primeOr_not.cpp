// Prime or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;

    bool is_prime = true;
    if( n == 0 || n == 1 ){
        cout<<"It is a composite number"<<endl;
    }
    else{
        for( int i = 2 ; i <= n-1; i++){
            if( n % i == 0){
            is_prime = false;
            break;
            }
        }
        if(is_prime){
        cout<<"Number is prime"<<endl;
        }
        else{
        cout<<"Not a prime number"<<endl;
        }
    }
    return 0;
}