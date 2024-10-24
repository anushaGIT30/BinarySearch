#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int t)
{
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {

        if (arr[mid] == t)
        {
            return mid;
        }
        else if (t > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
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
    int t;
    cin >> t;
    int res = binarySearch(arr, n, t);
    cout << res;
}
