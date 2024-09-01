// we can use directly i
#include<iostream>
#include<string>
using namespace std;

bool isparentheses(string str){
    int round = 0, square = 0 , curely = 0;
    for(char ch : str){
        if(ch == '('){
            round++;
        }
        else if(ch == ')'){
            round--;
        }
        else if(ch == '['){
            square++;
        }
        else if(ch == ']'){
            square--;
        }
        else if(ch == '{'){
            curely++;
        }
        else if(ch == '}'){
            curely--;
        }
    }
    if(round == 0 && square == 0 && curely == 0){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    
}
int main(){

    //string str = "() [] {}";
    string str = " ( { { [ ( ) } } )";
    isparentheses(str);
    return 0;
} 