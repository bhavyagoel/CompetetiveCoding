#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{
    ll n;
    cin >> n;

    ll even = 0, odd = 0;
    for (int i = 1; i < 2 * n + 1; i++)
    {
        if (i % 2 == 0)
        {
            even += i;
        }
        else
        {
            odd += i;
        }
    }

    cout << odd << " " << even;
}