#include <bits/stdc++.h>
using namespace std;

int max_diff(int max, int sum) {
    int max_res = INT_MIN; 

    for(int i = 0 ; i <= max; i++) {
        if ((sum - i) <= max && (sum-i)>=0) {
            if(abs(sum - 2*i) > max_res) {
                max_res = abs(sum - 2*i);
            }
        }
    }
    return max_res; 
}

int main() {
    int t; 
    cin>>t;

    while(t--) {
        int max, sum; 
        cin>>max>>sum;

        cout<<max_diff(max, sum)<<endl; 

    }
}