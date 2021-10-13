#include <bits/stdc++.h>
using namespace std; 

int check(int num) {
    int res = 0; 
    for(int i = 5; num/i>0; i*=5) {
        res += num/i;
    }
    return res;
}


int main() {
    int n; 
    cin>>n;

    while(n--) {
        int alpha; 
        cin>> alpha;

        cout<<check(alpha)<<endl;
    }
}