#include <iostream>
#include <cmath>
using namespace std;

// Define the function
double f(double x) {
    return x * x - 4;  // Example: root at x = ±2
}

// Define the derivative of the function
double f_prime(double x) {
    return 2 * x;
}

int main() {
    double x0 = 3;         // Initial guess
    double tol = 0.001;    // Tolerance
    int max_iter = 100, iter = 0;
    double x1;

    do {
        x1 = x0 - f(x0) / f_prime(x0);
        if (fabs(x1 - x0) < tol)
            break;
        x0 = x1;
        iter++;
    } while (iter < max_iter);

    cout << "Root = " << x1 << " after " << iter << " iterations\n";
    return 0;
}
