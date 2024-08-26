#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i = 1 ; i <= a ; i++){
        fact *= i;
    }
    return fact;
}
    
int binomial(int n , int r , int t){
  int bin = n/(r*t);
}

int main(){
    int a , b;
    cout<<"Enter total number of items = ";
    cin>>a;
    int n = factorial(a);

    cout<<"Enetr the number of items to pick = ";
    cin>>b;
    int r = factorial(b);
    
    int t = factorial(a - b);
    cout<<"total number of choices = "<<binomial(n ,r , t);
    return 0;
}
