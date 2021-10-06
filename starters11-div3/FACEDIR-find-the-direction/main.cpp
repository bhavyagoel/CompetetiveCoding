#include <bits/stdc++.h>
using namespace std; 

string direction_check(int n) {
    int rem = n % 4; 

    if(rem ==0){
        return "North";
    }
    else if (rem == 1) {
        return "East";
    }
    else if(rem == 2) {
        return "South";
    }
    return "West";
}

int main() { 
    int t; 
    cin>>t;

    while(t--) {
        int sec; 
        cin>>sec;

        cout<<direction_check(sec)<<endl;
    }
}