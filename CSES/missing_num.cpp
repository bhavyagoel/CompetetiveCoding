#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    ll n;
    cin >> n;

    ll sum = 0;
    ll givSum = (n * (n + 1)) / 2;
    for (ll i = 0; i < n - 1; i++)
    {
        ll temp;
        cin >> temp;
        sum += temp;
    }

    cout << givSum - sum;
}