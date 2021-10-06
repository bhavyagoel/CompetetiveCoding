#include <bits/stdc++.h>
#define int long long int

using namespace std;

int base_convert(int num, int base)
{
    int sum = 0;
    while (num)
    {
        sum += num % base;
        num /= base;
    }
    return sum;
}

int find_max_base(int n, int l, int r)
{
    int min = INT_MAX;
    int base;
    for (int i = l; i <= r; i++)
    {
        // double diff = (log10(n)/log10(r)) - floor(log10(n)/log10(r));
        // if(diff<min){
        //     min = diff;
        //     base = i;
        // }
        
        int sum = base_convert(n, i);
        cout<<"NUM "<<n<<" "<<sum<<" "<<i<<endl;
        if (min > sum)
        {
            min = sum;
            base = i;
        }
    }
    cout<<endl;

    return base;
}

int32_t main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, l, r;
        cin >> a >> l >> r;
        cout << find_max_base(a, l, r) << endl;
        // cout<<endl;
    }
}