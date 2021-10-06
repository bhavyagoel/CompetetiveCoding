#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{
    ll test_cases;
    cin >> test_cases;
    while (test_cases > 0)
    {
        ll k, d0, d1;
        cin >> k >> d0 >> d1;

        ll num = d0 + d1;

        num += (k - 2) * ((d0 + d1) % 10);

        // for (ll i = k - 3; i >= 0; i--)
        // {
        //     d0 += (d0 % 10);
        // }

        if (num % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        test_cases--;
    }
}