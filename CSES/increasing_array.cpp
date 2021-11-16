#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll res = 0;
    int prev = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < prev)
        {
            res += prev - arr[i];
        }
        else
        {
            prev = arr[i];
        }
        // prev = arr[i];
    }
    cout << res;
}