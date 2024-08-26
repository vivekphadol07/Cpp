// print n natural number and sum of them
#include<iostream>
using namespace std;

int main(){
    int n , sum = 0;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    
    for(int i = 1 ; i <= n ; i++){
        cout<<i<<"\t";
        sum += i;
    }
    cout<<"\nSum of n Natural number is "<<sum<<endl;

}