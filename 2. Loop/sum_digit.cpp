// sum of digit of number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a 4 digit number :";
    cin>>n;
    int sum = 0;
    while(n > 0){
       int dig= n % 10;
        sum += dig;  
        n /=10 ; 
    }
    cout<<"sum ="<<sum;
}