// Armstrong number or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int cubesum = 0;
    int num = n;
    while(num > 0){
        int dig = num % 10;
        cubesum += dig*dig*dig;
        num /= 10;
    }
    if(cubesum == n){
        cout<<n<<" is a Armstrong number "<<endl;
    }
    else{
        cout<<n<<" is not a Armstrong number"<<endl;
    }
    return 0;
}