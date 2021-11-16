#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    long long int n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        n = n % 2 ? (3 * n + 1) : n / 2;
    }
    cout << n;
}