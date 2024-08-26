//Armstrong number or not 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    int num = n;
    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num % 10;

    int cubesum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3 ;

    if(cubesum == n){
        cout<<n<<" is Armstrong number "<<endl;
    }
    else{
        cout<<n<<" is not Armstrong number"<<endl;
    }
     
return 0;
}