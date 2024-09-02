#include<iostream>
using namespace std;

bool powerOf_2(int num){
    if(!(num &(num-1))){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<powerOf_2(6);
    cout<<powerOf_2(32);
    return 0;
}