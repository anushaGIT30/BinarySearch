
//first and last occurence in an array
//ex:    2,4,6,8,8,8,11,13 and x: 8
//index: 0 1 2 3 4 5 6 7
//output: 3,5  {note:if we dont have element we have to return -1,-1}  suppose x=11 return 6,6


#include <iostream>
using namespace std;

void firstAndLast(int arr[], int n, int x) {
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
 cout << first << "," << last << endl;
}

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
    firstAndLast(arr, n, x);
    return 0;
}

//tc:o(n)
