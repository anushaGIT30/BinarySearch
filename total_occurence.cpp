#include <iostream>
using namespace std;
int totalOccurences(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            count = count + 1;
        }
    }
    return count;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ak = totalOccurences(arr, n, k);
    cout << ak;
}
// here the tc is o(n) linear search approach