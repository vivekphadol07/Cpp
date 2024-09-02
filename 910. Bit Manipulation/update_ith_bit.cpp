#include<iostream>
using namespace std;

int updatebit(int num , int i ,int val){
    num  = num & ~(1 << i);
    return (num | (val << i));
}
 
int main(){
    cout<<updatebit(7 , 3 , 1 );
    return 0;
}