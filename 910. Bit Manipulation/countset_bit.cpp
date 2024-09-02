/*
You are given a number n. Find the total count of set bits for all numbers from 1 to n(both inclusive).

Examples :
Input: n = 4
Output: 5
Explanation: For numbers from 1 to 4. For 1: 0 0 1 = 1 set bits For 2: 0 1 0 = 1 set bits 
For 3: 0 1 1 = 2 set bits For 4: 1 0 0 = 1 set bits Therefore, the total set bits is 5.
*/

#include<iostream>
#include<math.h>
using namespace std; 


int findLargestPower(int n){
    int x = 0;
    while (n > 0){
        x++;
        n = n >> 1;
    }
    return x - 1;
}
int countSetBits(int n){
    if (n <= 1){
    return n;
    }
    int x = findLargestPower(n);
    return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + (n - pow(2, x));
}
 
int main(){ 
    cout<<countSetBits(17);
    return 0;
}