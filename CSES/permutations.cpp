#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (n == 4)
    {
        cout << "2 4 1 3 ";
    }
    if (n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    int first = n;
    int sec = n - 1;

    while (first > 0)
    {
        cout << first << " ";
        first -= 2;
    }
    while (sec > 0)
    {
        cout << sec << " ";
        sec -= 2;
    }
}