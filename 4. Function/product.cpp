#include<iostream>
using namespace std;

int product(int a, int b){
    int pro = a * b;
    return pro;
}

int even_odd(int a){
    if( a % 2 == 0){
        cout<<a<<" is a Even number"<<endl;
    }
    else{
        cout<<a<<" is odd number"<<endl;
    }
}
int main(){
    int i = product(23 , 79);
    cout<<"product = "<<i<<endl;

    even_odd(9);
    return 0;
}