/*
You are given two numbers A and B. The task is to count the number
of bits needed to be flipped to convert A to B.

Example 1:

Input: A = 10, B = 20

Output: 4

Explanation:
A  = 01010
B  = 10100
As we can see, the bits of A that need 
to be flipped are 01010. If we flip 
these bits, we get 10100, which is B.
*/

#include<iostream>
using namespace std;

int flipCount(int a , int b){
    int count = 0;
    while((a > 0) || (b > 0)){
        int lastdig_a = a & 1 ;
        int lastdig_b = b & 1 ;
        if(lastdig_a != lastdig_b){
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return count;
}
 
int main(){
    int a = 10 , b = 20 ;
    cout<<flipCount(a , b);
    return 0;
}