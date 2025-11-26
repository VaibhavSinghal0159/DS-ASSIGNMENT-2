#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int element) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == element) return mid;
        else if (arr[mid] < element) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int element = 10;
    int result = binarySearch(arr, 7, element);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
