#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,4,3,2,1,5,7,9,7,5,3,5,6,3,7,3,8,2,7,5,3};

    set<int> distinct(arr, arr + 21);

    cout << "Total distinct elements : " << distinct.size() << endl;

    return 0;
}
