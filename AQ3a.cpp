#include <bits/stdc++.h>
using namespace std;

int LinearTime(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) return i + 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    cout << LinearTime(arr, 5) << endl;
    return 0;
}
