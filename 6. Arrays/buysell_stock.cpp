// Maximum profit gain by selling and buying stock 
#include<iostream>
using namespace std;

void maxProfit(int n , int *price){ // Time complexity = O(n+n) = O(2n) = O(n)

    int bestBuy[100000]; // bestBuy = [2147483647, 3, 4, 2, 2, 2]
    bestBuy[0] = INT32_MAX;

    for(int i = 1 ; i < n ; i++){  // Loop run for n times
        bestBuy[i] = min(bestBuy[i-1] , price[i-1]);
    }
    
    int maxProfit = 0;
    for(int i = 0 ; i < n ; i++){ // Loop run for n times
        int curProfit = price[i] - bestBuy[i];
        maxProfit = max(maxProfit , curProfit);
    }
    cout<<"Maximum Profit = "<<maxProfit<<endl; // 10
}

int main(){
    int arr[] = {3 , 4, 2, 10, 12 , 8 };
    int n = sizeof(arr)/sizeof(int);

    maxProfit(n,arr);
}