#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll n;
        cin >> n;
        ll arr[n];
        int min = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (min >= arr[i])
            {
                min = arr[i];
                count += 1;
            }

            else if (min < arr[i])
            {
                arr[i] = min;
            }
        }

        cout << count << endl;

        t--;
    }
}