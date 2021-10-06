#include <bits/stdc++.h>
using namespace std; 

string check(string s) {
    int n = s.length(); 

    if(n%2 == 0) {
        map<char, int> prior; 
        map<char, int> later;

        for(int i = 0 ; i < n/2; i++) {
            prior[s[i]] += 1;
        }

        for(int i = n/2; i < n; i++) {
            later[s[i]] += 1;
        }

        if(prior.size() != later.size()) {
            return "NO";
        }else {
            for (auto i: prior) {
                if(i.second != later[i.first]) {
                    return "NO";
                }
            }
        }
    } else {
        map<char, int> prior; 
        map<char, int> later;

        for(int i = 0 ; i < floor(n/2); i++) {
            prior[s[i]] += 1;
        }

        for(int i = floor(n/2) + 1; i < n; i++) {
            later[s[i]] += 1;
        }

        if(prior.size() != later.size()) {
            return "NO";
        }else {
            for (auto i: prior) {
                if(i.second != later[i.first]) {
                    return "NO";
                }
            }
        }
    }

    return "YES";
}

int main() {
    int n;
    cin>>n;

    while(n--) {
        string s;
        cin>>s;

        cout<<check(s)<<endl;
    }
}