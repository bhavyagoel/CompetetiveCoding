#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    string temp;
    cin >> temp;
    ll res = INT_MIN;
    for (int i = 0; i < temp.length(); i++)
    {
        int chr = temp[i];
        ll cnt = 0;
        while (temp[i] == chr)
        {
            i++;
            cnt++;
        }
        i -= 1;

        res = max(res, cnt);
    }
    cout << res;
}