// Water Trap inside the column

#include<iostream>
using namespace std;

int trap(int n , int *height){ // Time Complexity = O(n+n+n) = O(3n) = O(n)
    int leftmax[20000], rightmax[20000];
    leftmax[0] = height[0];
    rightmax[n-1] = height[n-1];

    for(int i = 1 ; i < n ; i++){ // loop run for n times
        leftmax[i] = max(leftmax[i-1] , height[i-1]);  // liftmax[] = {0, 4, 4, 4, 6, 6, 6}
    }

    for(int i = n-2 ; i >= 0 ; i--){ // loop run for n times
        rightmax[i] = max(rightmax[i+1], height[i+1]); // rightmax[] = {6, 6, 6, 5, 5, 5, 0}
    }

    int watertrap = 0 ;
    for(int i = 0 ; i < n ; i++){ // loop run for n times
         int currtrap = min(leftmax[i], rightmax[i])-height[i]; //currtrap = {-4, 2, 4, -6, 2, 3, -5}
        if(currtrap > 0){
            watertrap += currtrap;
        }
    }
    cout<<"Total Water Trap = "<<watertrap; // 11
    return watertrap;
}

int main(){
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height)/sizeof(int);

    trap(n ,height);
    return 0;
}
