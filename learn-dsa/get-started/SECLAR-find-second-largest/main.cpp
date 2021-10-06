#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    vector<ll> arr(3);

    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());

    cout << arr[1];
}