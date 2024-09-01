#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void isDup(string str , int n){
	sort(str.begin(),str.end());
	cout<<str<<endl; 
	int count = 0 , i = 0;
	for(i = 0 ; i < n-1 ; i++){
		for(char ch : str){
			if(ch == str[i]){
				count++;
			}
		}
		cout<<str[i]<<" occurred "<<count<<endl;
		i += (count-1);
		count = 0;
	}
}

int main(){
	string str = "geeksforgeeks";
	isDup(str , str.length());
	
}