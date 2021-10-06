#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

pair<int, int> xor_equal(vector<ll> arr, ll x)
{
    unordered_map<ll, ll> nums;
    unordered_map<ll, ll> steps;
    // unordered_map <int, int> count;

    ll n = arr.size();
    // for (ll i = 0; i < n; i++)
    // {
    //     nums[arr[i]] = 0;
    //     steps[arr[i]] = 0;
    //     nums[arr[i] ^ x] = 0;
    //     steps[arr[i] ^ x] = 0;
    //     // count[arr[i]] = 0;
    // }

    for (ll i = 0; i < n; i++)
    {
        nums[arr[i]] += 1;
    }

    int prev_max = INT_MIN;
    int prev_ind; 
    for (auto i = nums.begin(); i != nums.end(); ++i)
    {
        if (i->second > prev_max)
        {
            prev_max = i->second;
            prev_ind = i->first;
        }
    }

    // if(nums.find(prev_ind ^ x) != nums.end()) {
    //     int step = prev_max; 
    //     int count = nums[prev_max ^ x] + nums[prev_max];
    //     cout<<"HELLO"<<endl;
    //     return make_pair(count, step);
    // }

    for (ll i = 0; i < n; i++)
    {
        nums[arr[i] ^ x] += 1;
        steps[arr[i] ^ x ] += 1;
    }

    // for (auto i = nums.begin(); i != nums.end() ; ++i) {

    //     count[i->first] += i-> second;
    //     count[i->first ^ x] += i->second;
    //     steps[i->first ^ x] += i->second;
    // }

    ll index;
    ll max = INT_MIN;

    for (auto i = nums.begin(); i != nums.end(); ++i)
    {
        if (i->second > max)
        {
            max = i->second;
            index = i->first;
        }
    }
    // cout<<prev_max<<" "<<max<<endl;

    int min_steps = steps[index];
    // cout<<"nums "<<endl;
    // for(auto i = nums.begin(); i != nums.end(); ++i) {
    //     cout<<i->first<<" "<<i->second<<endl;
    // }


    for(auto i = nums.begin(); i != nums.end(); ++i) {
        if(i-> second == max) {
            if (steps[i->first] < min_steps) {
                min_steps = steps[i->first];
            }
        }
    }

    if (prev_max == max)
    {
        min_steps = 0;
        // cout<<"prev max "<<prev_max<<endl;
        return make_pair(prev_max, min_steps);
    }
    return make_pair(max, min_steps);
}

int32_t main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        pair<ll, ll> ans = xor_equal(arr, x);

        cout << ans.first << " " << ans.second << endl;
    }
}