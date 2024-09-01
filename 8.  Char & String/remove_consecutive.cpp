#include<iostream>
#include<string>
using namespace std;

int remConsecutive(string str , int n){
    string str1;
    for(int i = 0 ; i < n-1 ; i++){
        if(str[i] == str[i+1]){
            str1+=str[i];
            i+=1;
        }
        else{
            str1+=str[i];
        }
    }
    cout<<str1;
}
int main(){
    string str = "aaabbaa";
    remConsecutive(str , str.length());
    return 0;
}