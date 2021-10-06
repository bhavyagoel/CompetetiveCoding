#include <bits/stdc++.h>
using namespace std;

int find_point(int num, int sum) {
    int leftSum = 0; 
    // int rightSum = 0; 

    int rightSum = (num*(num + 1))/2;

    for(int i = num; i > 0 ;i--) {
        // int prev = i-1; 
        // int curr = i; 
        
        rightSum = rightSum - i;
        cout<<(leftSum + rightSum)<<endl;
        if((leftSum + rightSum)==sum) {
            return i;
        }

        leftSum += i;

    }

    // int i = 1;
    // int j = num; 
    // while(i <= j) {
    //     int mid = (j+i)/2;

    //     int prev = mid-1; 

    //     leftSum = (prev*(prev+1))/2;
    //     rightSum = allSum - (mid*(mid+1))/2; 
    //     int totSum = leftSum + rightSum;

    //     if(totSum == sum) {
    //         return mid;
    //     }

    //     else if(totSum < sum) {
    //         // i = 0;
    //         j = mid-1;
    //     }
    //     else {
    //         // j = num;
    //         i = mid+1;
    //     }
    // }
    return -1; 
}

int main() { 
    int t; 
    cin>>t; 

    while(t--) {
        int num, sum; 
        cin>>num>>sum; 

        cout<<find_point(num, sum)<<endl;
    }
}