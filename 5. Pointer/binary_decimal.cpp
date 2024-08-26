#include<iostream>
using namespace std;

void bintodec( int bin){
    int n = bin ;
    int dec = 0;
    int pow = 1;
    while(n > 0){
        int lastdig = n % 10;
        dec += lastdig * pow;
        pow *= 2;
        n /= 10;
    }
    cout<<dec<<endl;
}

void Dectobin(int decnum){
    int n = decnum;
    int binnum = 0;
    int pow = 1;
    while(n > 0){
        int rem = n % 2;
        binnum += rem * pow;
        pow *= 10;
        n /= 2;
    }
    cout<<binnum<<endl;
}

int main(){
    bintodec(101);
    Dectobin(5);
    return 0;
}