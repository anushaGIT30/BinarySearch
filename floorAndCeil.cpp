#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int floor = -1, ceil = -1;
    int low = 0, high = n - 1;

    // Sort the array to use binary search
    sort(a.begin(), a.end());

    // Binary search for floor
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == x) {
            floor = a[mid];
            break;
        } else if (a[mid] < x) {
            floor = a[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0, high = n - 1;

    // Binary search for ceil
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == x) {
            ceil = a[mid];
            break;
        } else if (a[mid] < x) {
            low = mid + 1;
        } else {
            ceil = a[mid];
            high = mid - 1;
        }
    }

    return {floor, ceil};
}

int main() {
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> a(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the value to find floor and ceil for: ";
    cin >> x;

    pair<int, int> res = getFloorAndCeil(a, n, x);
    cout << "Floor: " << res.first << ", Ceil: " << res.second << endl;

    return 0;
}
