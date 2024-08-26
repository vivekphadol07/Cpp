//income tax calculator
#include<iostream>
using namespace std;

int main(){
    double a;
    cout<<"Enter the Income:"<<endl;
    cin>>a;

    if( a <= 300000){
        cout<<"Nil";
    }
    else if(a >= 300000 && a <= 700000){
        cout<<"Tax to pay :"<<(a * 0.05)<<endl;
    }
    else if(a >= 700000 && a <= 1000000){
        cout<<"Tax to pay :"<<(a * 0.10)<<endl;
    }
    else if(a >= 1000000 && a <= 1200000){
        cout<<"Tax to pay :"<<(a * 0.)<<endl;
    }
    else if(a >= 1200000 && a <= 1500000){
        cout<<"Tax to pay :"<<(a * 0.20)<<endl;
    }
    else{
        cout<<"Tax to pay :"<<(a * 0.30)<<endl;
    }
    return 0;
}