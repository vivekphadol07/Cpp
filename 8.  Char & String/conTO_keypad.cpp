//Convert a sentence into its equivalent mobile numeric keypad sequence
#include<iostream>
#include<string>
using namespace std;

string conTo_key(string strr[] , string str_in , int n){
    string str1 ;
    for(int i = 0 ; i < n ; i++){
        if(str_in[i] >= 'A' && str_in[i] <= 'Z'){
            int position = str_in[i] - 'A';
            str1 = str1 + strr[position];
        }
        else if( str_in[i] >= 'a' && str_in[i] <= 'z'){
            int position = str_in[i] - 'a';
            str1 = str1 + strr[position];
        }
        else{
             str1 = str1 + '0';
        }    
    }
    cout<<str1<<endl;
}


int main(){
    string strr[] = {"2" , "22" , "222" , "3" , "33" , "333" , 
                    "4" , "44" , "444" , "5" , "55" , "555" ,
                    "6" , "66" , "666" , "7" , "77" , "777" , "7777" ,
                    "8" , "88" , "888" , "9" , "99" , "999" , "9999" };

    //string str_in = "Vivek Phadol";
    string str_in = "GEEKSFORGEEKS" ;
    conTo_key(strr , str_in  , str_in.length());
    return 0;
}