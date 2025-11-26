#include <bits/stdc++.h>
using namespace std;

int main() {
    string arr[] = {"Vaibhav","Rohit","Rahul","Mohit"};
    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
