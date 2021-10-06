#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {

        if ((a == b) && (b == c))
        {
            cout << 1;
        }
        else if ((a == b) | (b == c) | (a == c))
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
    }
    else
    {
        cout << -1;
    }
}