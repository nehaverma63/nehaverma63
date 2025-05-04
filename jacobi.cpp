#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 3;
    float a[n][n + 1], x[n] = {0}, x_new[n];
    float tol = 0.001;
    int max_iter = 100, iter = 0;

    cout << "Enter the augmented matrix (3x4):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            cin >> a[i][j];

    do {
        for (int i = 0; i < n; i++) {
            float sum = a[i][n];
            for (int j = 0; j < n; j++) {
                if (j != i)
                    sum -= a[i][j] * x[j];
            }
            x_new[i] = sum / a[i][i];
        }

        float err = 0;
        for (int i = 0; i < n; i++) {
            err += fabs(x_new[i] - x[i]);
            x[i] = x_new[i];
        }

        if (err < tol)
            break;

        iter++;
    } while (iter < max_iter);

    cout << "Solutions after " << iter << " iterations:\n";
    for (int i = 0; i < n; i++)
        cout << "x" << i + 1 << " = " << x[i] << endl;

    return 0;
}
