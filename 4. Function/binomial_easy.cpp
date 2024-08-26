#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i = 1 ; i <= a ; i++){
        fact *= i;
    }
    return fact;
}
    
int binomial(int n , int r ){
    int n = factorial(n);
    int r = factorial(r);
    int t = factorial(n - r);
  int bin = n/(r*t);
}

int main(){
    int a , b;
    cout<<"Enter total number of items = ";
    cin>>a;
    cout<<"Enetr the number of items to pick = ";
    cin>>b;
    cout<<"total number of choices = "<<binomial(a , b);
    return 0;
}
