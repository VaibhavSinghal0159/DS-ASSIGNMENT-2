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
    int i=0, j=0;
    while (i<A.size() && j<B.size()) {
        if (A[i].row==B[j].row && A[i].col==B[j].col) {
            int sum = A[i].val + B[j].val;
            if (sum != 0) C.push_back({A[i].row, A[i].col, sum});
            i++; j++;
        }
        else if (A[i].row<B[j].row || (A[i].row==B[j].row && A[i].col<B[j].col)) {
            C.push_back(A[i]); i++;
        } else {
            C.push_back(B[j]); j++;
        }
    }
    while (i<A.size()) C.push_back(A[i++]);
    while (j<B.size()) C.push_back(B[j++]);

    cout << "\nAddition Result (Triplet):\nRow Col Value\n";
    for (auto &t : C) cout << t.row << " " << t.col << " " << t.val << "\n";

    return 0;
}
