//  https://codeforces.com/contest/1367/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;

        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i % 2)
            {
                odd += temp % 2 ? 0 : 1;
            }
            else
            {
                even += temp % 2 ? 1 : 0;
            }
        }

        if (even == odd)
        {
            cout << even << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}