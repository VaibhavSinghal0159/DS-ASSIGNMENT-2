#include <bits/stdc++.h>
using namespace std;

struct Triple {
    int row, col, val;
};

int main() {
    int rows = 3, cols = 3;
    vector<Triple> A;

    A.push_back({0, 0, 5});
    A.push_back({1, 1, 8});
    A.push_back({2, 0, 6});
    A.push_back({2, 2, 3});

    cout << "Original Matrix (Triplet):\nRow Col Value\n";
    for (auto &t : A) cout << t.row << " " << t.col << " " << t.val << "\n";


    vector<Triple> T;
    for (auto &t : A) {
        T.push_back({t.col, t.row, t.val});
    }

    cout << "\nTranspose Matrix (Triplet):\nRow Col Value\n";
    for (auto &t : T) cout << t.row << " " << t.col << " " << t.val << "\n";

    return 0;
}
