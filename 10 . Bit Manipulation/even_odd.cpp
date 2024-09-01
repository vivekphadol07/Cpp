// Check the number is even or odd using bitwise operator.

#include<iostream>
using namespace std;

void evenOdd(int num){
    if(!(num & 1)){
        cout<<"Even \n";
    }
    else{
        cout<<"Odd \n";
    }
}
 
int main(){
    evenOdd(6);\
    evenOdd(7);
    return 0;
}