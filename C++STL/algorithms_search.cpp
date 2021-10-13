#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {1, 10, 11, 90, 100};
    int n = sizeof(arr) / sizeof(int);

    // Search ----> find
    int key;
    cin >> key;
    auto it = find(arr, arr + n, key);
    int index = it - arr;
    if (index == n)
    {
        cout << key << " not present";
    }
    else
        cout << index << endl;

    // Binary Search
    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "Present";
    }
    else
        cout << "Absent";

    // Index of element
    // lower_bound(s. e. key) and upper_bound(s, e, key)

    // lower bound returns address of first bucket greater than equal to than key
    auto lb = lower_bound(arr, arr + n, key);
    cout << "lower bound" << (lb - arr) << endl;

    // lower bound returns address of first bucket strictly greater than key
    auto ub = upper_bound(arr, arr + n, key);
    cout << "upper bound" << (ub - arr) << endl;

    cout << "Occurence frequency of " << key << "is: " << (ub - lb) << endl;
}
