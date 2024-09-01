/*
to get the ith bit 
input = 6 and i = 2
binary form of 6 = 00000110
means we have print output as 2th term of 6 is 1   
*/

#include<iostream>
using namespace std;

int getbit(int num , int i){
    if(!((num >> i) & 1)){
        return 0;
    }
    else{
        return 1;
    }
}
 
int main(){
    cout<<getbit(1 , 1);
 
    return 0;
}