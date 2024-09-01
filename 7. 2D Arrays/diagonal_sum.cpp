#include<iostream>
using namespace std;

void diagonalSum(int n ,int m, int arr[][4]){  // Time complexity = O(n)
    int priSum= 0 , secSum = 0;
    for(int i = 0 ; i < n ; i++){ // loop run for n times 
        priSum += arr[i][i];
        if(arr[i][i] == arr[i][n-i-1]){
          secSum += 0;
        }
        else{
            secSum += arr[i][n-i-1];
        }
    }
    int diaSum = priSum + secSum;
    cout<<"Diagonal sum = "<<diaSum; 
    
}
int main(){
    int arr[4][4] = {{1, 2, 3 , 4} , {5, 6, 7, 8}, {9, 10, 11 ,12}, {13, 14, 15, 16}};
    diagonalSum(4 , 4, arr);

    /*int arr[3][3] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}}
    diagonalSum(3 , 3 , arr )*/

}