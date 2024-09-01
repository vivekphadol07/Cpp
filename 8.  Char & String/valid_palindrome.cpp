// we can use ispalindrome
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string str , int n){

    string str1;
    for(char ch : str){
        if(isdigit(ch) || isalpha(ch)){
            str1 += tolower(ch);
        }
    }

    string reverStr1 = str1;
    reverse(reverStr1.begin(),reverStr1.end());
    //cout<<reverStr1<<endl;

    if(str1 == reverStr1){
        cout<<"Its is Palindrime"<<endl;
        return true;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
        return false;
    }
    
}
int main(){
    string str = "A man, a plan, a canal: Panama";
    //string str = "race a car";
    isPalindrome(str , str.length());
    return 0;
}