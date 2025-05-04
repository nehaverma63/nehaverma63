#include <iostream>
using namespace std;

int main() {
    const int n = 3;  // Number of variables
    float a[n][n + 1], x[n];

    cout << "Enter the augmented matrix (3x4):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n + 1; j++)
            cin >> a[i][j];

    // Forward Elimination
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1
        float diag = a[i][i];
        for (int j = 0; j <= n; j++)
            a[i][j] /= diag;

        // Eliminate the other rows
        for (int k = 0; k < n; k++) {
            if (k == i) continue;
            float factor = a[k][i];
            for (int j = 0; j <= n; j++)
                a[k][j] -= factor * a[i][j];
        }
    }

    // Extract solution
    for (int i = 0; i < n; i++)
        x[i] = a[i][n];

    cout << "Solutions:\n";
    for (int i = 0; i < n; i++)
        cout << "x" << i + 1 << " = " << x[i] << endl;

    return 0;
}
