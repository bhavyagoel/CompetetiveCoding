#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{
    ll n;
    cin >> n;

    if ((n % 5 == 0) | (n % 6 == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}