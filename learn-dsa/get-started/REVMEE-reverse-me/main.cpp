#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}