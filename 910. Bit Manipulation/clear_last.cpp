#include<iostream>
using namespace std;

int clearLast(int num , int i){
    int bitmask = ~0; 
    return (num & (bitmask << i));
}
 
int main(){
    cout<<clearLast(6 , 3);
    return 0;
}