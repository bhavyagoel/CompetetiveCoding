#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll L, R;
    cin >> L >> R;

    for (int i = L; i < R + 1; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}