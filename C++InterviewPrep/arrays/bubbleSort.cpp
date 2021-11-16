#include <bits/stdc++.h>
using namespace std;

// Pushing the bigger elements to end of array using
// pairwise swapping

bool compare(int a, int b)
{
    return a < b;
}

// Building sorted array from last
void bubble_sort_comparator(int *arr, int n, bool (&cmp)(int a, int b))
{
    // N-1 large elements to the end
    for (int itr = 1; itr <= n - 1; itr++)
    {
        // Pairwise swapping of the unsorted array
        for (int j = 0; j < (n - itr); j++)
        {
            if (cmp(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Building sorted array from last
void bubble_sort(int *arr, int n)
{
    // N-1 large elements to the end
    for (int itr = 1; itr <= n - 1; itr++)
    {
        // Pairwise swapping of the unsorted array
        for (int j = 0; j < (n - itr); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    // bubble_sort(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    bubble_sort_comparator(arr, n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
