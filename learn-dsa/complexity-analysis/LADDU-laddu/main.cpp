#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        string country; 
        cin>>n>>country;
        int res = 0; 
        int bonus = 0; 
        while(n--) {
            string s;
            cin>>s;

            if(s == "CONTEST_WON") {
                res += 300;
                int rank;
                cin>>rank;

                if(rank<20) {
                    res += (20-rank);
                }
            }

            if(s=="TOP_CONTRIBUTOR") {
                res += 300;
            }

            if(s=="BUG_FOUND") {
                int severity;
                cin>>severity;

                res += severity; 
            }

            if(s=="CONTEST_HOSTED") {
                res += 50;
            }
        }

        if(country=="INDIAN") {
            cout<<res/200<<endl;
        }
        else {
            cout<<res/400<<endl;
        }

    }
}