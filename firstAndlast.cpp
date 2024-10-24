#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x) {
    int first = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1;  // Continue searching in the left half
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return first;
}

int lastOccurrence(int arr[], int n, int x) {
    int last = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1;  // Continue searching in the right half
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return last;
}
/*pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    if (first == -1) return { -1, -1};
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}*/

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value to find: ";
    cin >> x;
    
    int first = firstOccurrence(arr, n, x);
    int last = lastOccurrence(arr, n, x);

    cout << "First occurrence: " << first << ", Last occurrence: " << last << endl;

    return 0;
}


