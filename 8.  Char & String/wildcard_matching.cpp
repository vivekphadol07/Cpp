#include<iostream>
#include<string>
using namespace std;

string wild_match(string wild , string pattern , int n , int m){
    string str ;
    for(int i = 0 ; i < m ; i++){
        if(isdigit(wild[i]) || isalpha(wild[i])){
            str += wild[i];
        }
        else{
            if(isdigit(wild[i+1]) || isalpha(wild[i+1])){
                do{
                    str+=pattern[i];
                }while(isdigit(wild[i]) || isalpha(wild[i]));
            }
            else{
                do{
                    str+=pattern[i];
                }while(isdigit(wild[i]) || isalpha(wild[i])); 
            }
        }
    }
    cout<<str<<endl;
    cout<<"Matching Done..."<<endl;
}

int main(){
    // string wild = "ge*ks" ;
    // string pattern = "geeks";
    string wild = "ge?ks*";
    string pattern = "geeksforgeeks";
    wild_match(wild , pattern , wild.length() , pattern.length());

    return 0;
}