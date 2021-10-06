#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{

    ll a, b, c;
    cin >> a >> b >> c;

    if (((a + b + c) == 180) && (a != 0) && (b != 0) && (c != 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}