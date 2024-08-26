// A calculator
#include<iostream>
using namespace std;

int main(){
   double a , b ;
   int  ch ;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter the choice \n1: Addition \n2: Subtraction \n3: Multiplication \n4: Division"<<endl;
    cin>>ch;

    switch (ch)
    {
    case 1:
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;
    case 2:
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;
    case 3:
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;
    case 4:
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;
    default:
    cout<<"Invalid Data"<<endl;
        break;
    }
    return 0;
}