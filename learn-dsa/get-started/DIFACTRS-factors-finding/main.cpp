#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{
    ll n;
    cin >> n;
    vector<ll> factors;

    for (int i = 1; i < n/2 + 1; i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
        }
    }
    factors.push_back(n);

    cout << factors.size() << endl;
    for (int i = 0; i < factors.size(); i++)
    {
        cout << factors[i] << " ";
    }
}