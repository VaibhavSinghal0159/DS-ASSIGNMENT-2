#include <bits/stdc++.h>
using namespace std;

struct Triple {
    int row, col, val;
};

int main() {
    int rows = 3, cols = 3;


    vector<Triple> A = { {0,0,5}, {1,1,8}, {2,2,3} };

    vector<Triple> B = { {0,2,6}, {1,1,7}, {2,0,4} };

    cout << "Matrix A (Triplet):\n";
    for (auto &t : A) cout << t.row << " " << t.col << " " << t.val << "\n";
    cout << "\nMatrix B (Triplet):\n";
    for (auto &t : B) cout << t.row << " " << t.col << " " << t.val << "\n";


    vector<Triple> C;
    for (auto &a : A) {
        for (auto &b : B) {
            if (a.col == b.row) {
                int r = a.row, c = b.col, v = a.val * b.val;

                bool found = false;
                for (auto &t : C) {
                    if (t.row==r && t.col==c) {
                        t.val += v;
                        found = true;
                        break;
                    }
                }
                if (!found) C.push_back({r,c,v});
            }
        }
    }

    cout << "\nMultiplication Result (Triplet):\nRow Col Value\n";
    for (auto &t : C) cout << t.row << " " << t.col << " " << t.val << "\n";

    return 0;
}
