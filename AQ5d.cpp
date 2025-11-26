#include <bits/stdc++.h>
using namespace std;

class UpperTriangularMatrix
{
private:
    int *A;
    int n;

public:
    UpperTriangularMatrix(int size)
    {
        n = size;
        A = new int[n * (n + 1) / 2];
        for (int i = 0; i < n * (n + 1) / 2; ++i)
            A[i] = 0;
    }

    ~UpperTriangularMatrix()
    {
        delete[] A;
    }

    \
    void set(int i, int j, int x)
    {
        if (i <= j)
        {
            int index = (j * (j - 1)) / 2 + (i - 1); 
            A[index] = x;
        }
    }

    int get(int i, int j) const
    {
        if (i <= j)
        {
            int index = (j * (j - 1)) / 2 + (i - 1);
            return A[index];
        }
        else
        {
            return 0;
        }
    }

  
    void display() const
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (i <= j)
                    cout << get(i, j) << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the dimension of the upper triangular matrix: ";
    cin >> n;

    UpperTriangularMatrix mat(n);

    cout << "Enter the elements (only upper triangular including diagonal):\n";
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            int x;
            cin >> x;
            mat.set(i, j, x);
        }
    }

    cout << "The matrix is:\n";
    mat.display();

    return 0;
}
