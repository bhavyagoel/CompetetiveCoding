#include <bits/stdc++.h>
using namespace std;

// holding the first element and finiding th minimum from rest, then swap
void selection_sort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int pos = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[pos])
            {
                pos = j;
            }
        }
        swap(arr[i], arr[pos]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}