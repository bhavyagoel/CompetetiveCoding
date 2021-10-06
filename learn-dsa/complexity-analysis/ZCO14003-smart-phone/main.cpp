#include <bits/stdc++.h>
using namespace std; 

int main() {

    int n; 
    cin>>n;

    vector<int> alpha(n);

    for(int i = 0 ; i < n; i++) {
        cin>>alpha[i];
    }
    sort(alpha.begin(), alpha.end());

    int res = INT_MIN;
    for(int i = 0; i < n; i++) {
        res = max(res, alpha[i]*(n-i));
    }

    return res; 
}