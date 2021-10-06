#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1 + 5 * i; j < 6 + 5 * i; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = 5 + 5 * i; j > 5 * i; j--)
            {
                cout << j << " ";
            }
        }

        cout << "\n";
    }
}