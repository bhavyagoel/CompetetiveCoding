#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int lo = 0;
    int hi = n - 1;

    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (key < arr[mid])
        {
            hi = mid - 1;
        }
        else if (key > arr[mid])
        {
            lo = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main(){


    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key; 
    cin>>key; 

    cout<<binary_search(arr, n, key)<<endl;

}