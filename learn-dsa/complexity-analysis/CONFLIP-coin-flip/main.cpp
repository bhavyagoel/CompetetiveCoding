#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{
    ll test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int cnt_game; 
        cin>>cnt_game;

        while(cnt_game--) {
            int i, n, q; 
            cin>>i>>n>>q;

            if(i==q) {
                cout<<n/2<<endl;
            }
            else{
                if(n%2 != 0) cout<<(n/2)+1<<endl;
                else cout<<n/2<<endl;
            } 

        }
    }
}