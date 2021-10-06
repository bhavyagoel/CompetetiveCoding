#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}