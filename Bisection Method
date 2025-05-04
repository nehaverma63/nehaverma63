#include <iostream>
#include <cmath>
using namespace std;

// Define the function you want to find the root of
double f(double x) {
    return x * x - 4;  // Example: Root of x^2 - 4 = 0, i.e., x = ±2
}

int main() {
    double a = 0, b = 5, mid;
    double tol = 0.001;  // Tolerance for stopping
    int max_iter = 100, iter = 0;

    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval. f(a) and f(b) must have opposite signs.\n";
        return 1;
    }

    do {
        mid = (a + b) / 2;
        if (f(mid) == 0.0)
            break;
        else if (f(a) * f(mid) < 0)
            b = mid;
        else
            a = mid;
        iter++;
    } while (fabs(f(mid)) > tol && iter < max_iter);

    cout << "Root = " << mid << " after " << iter << " iterations\n";
    return 0;
}
