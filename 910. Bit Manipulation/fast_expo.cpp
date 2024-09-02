#include<iostream>
using namespace std;

int fastExpo(int x , int n){
    int ans = 1;
    while(n > 0){
        int lastdig = n & 1;
        if(lastdig){
            ans *= x ;
        }
        x *= x;
        n = n >> 1;
    }
    return ans;
}
 
int main(){
    cout<<fastExpo(9 , 9);
    return 0;
}