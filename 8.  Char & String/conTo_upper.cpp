// Convert the given string into Upoer case.
#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char word[], int n){
    for(int i = 0 ; i < n ; i++){
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }
        else{
            word[i] = ch - 'a' + 'A';
        }
    }       
}

int main(){
    char word[] ="apple";
    toUpper( word , strlen(word));
    cout<< word<<endl;
    return 0;
}