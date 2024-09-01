#include<iostream>
using namespace std;

int countbit(int num){
    int count = 0;
    while(num > 0){
        int lastdig = num & 1;
        count += lastdig;
        num = num >> 1;
    }
    return count;
}
 
int main(){
    cout<<countbit(7);
    return 0;
}