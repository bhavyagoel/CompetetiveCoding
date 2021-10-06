#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
            {
                even.push_back(arr[i]);
            }
            else
            {
                odd.push_back(arr[i]);
            }
        }

        int sum = 0;
        vector <int>brr;
        for (int i = 0 ; i < n ; i++) {
            if(i%2 == 0 && !odd.empty()){
                brr.push_back(odd.back());
                odd.pop_back();
            }
            else if(i%2!=0 && !even.empty()) {
                brr.push_back(even.back());
                even.pop_back();
            }
        }

        while(!even.empty()) {
            brr.push_back(even.back());
            even.pop_back();
        }

        while(!odd.empty()){
            brr.push_back(odd.back());
            odd.pop_back();
        }

        for (int i = 0; i < n; i++)
        {
            brr[i] += (i + 1);
            sum += (brr[i] % 2);
        }
        cout << sum << endl;
    }
}