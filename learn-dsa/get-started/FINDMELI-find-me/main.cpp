#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll>::iterator it = find(arr.begin(), arr.end(), k);
    if (it != arr.end())
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
}