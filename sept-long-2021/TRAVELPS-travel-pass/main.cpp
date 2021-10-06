#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;

        cin >> n >> a >> b;
        string s;
        cin >> s;
        int count_state = 0;
        int count_district = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count_district += 1;
            }
            else
            {
                count_state += 1;
            }
        }

        int price = (count_district * a) + (count_state * b);

        cout << price << endl;
    }

    return 0;
}