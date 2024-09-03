/*
Given two numbers X and Y, and a range [L, R] where 1 <= L <= R <= 32.
You have to copy the set bits of 'Y' in the range L to R in 'X'.
Return this modified X.

Note: Range count will be from Right to Left & start from 1.

Example 1:

Input: 
X = 44, Y = 3 
L = 1,  R = 5
Output: 47
Explaination: 
Binary represenation of 44 and 3 is 101100 and 000011.
So in the range 1 to 5 there are two set bits of 3 (1st & 2nd position). 
If those are set in 44 it will become 101111 which is 47.

Example 2:
Input: 
X = 16, Y = 2
L = 1,  R = 3
Output: 18
*/

#include<iostream>
using namespace std;

int copySetbit(int &x , int y , int l , int r ){
    if(l > 1 || r > 32){
        return -1;
    }
    for(int i = l ; i <= r ; i++){
        int bitmask = 1 << (i - 1);
        if(y & bitmask){
            x = x | bitmask;
        }
    }
    return x;
}
 
int main(){
    //int x = 44 , y = 3 , l =1 , r = 5;
    int x = 16 , y = 2 , l = 1 , r = 3;
    cout<<copySetbit(x , y, l ,r);
    return 0;
}