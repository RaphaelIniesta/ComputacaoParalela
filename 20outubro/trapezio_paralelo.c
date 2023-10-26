#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

double f(double x) {
    return exp(x);
}

double trapezoid_serial(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        sum += f(x);
    }
    return h * sum;
}

int main() {
    double a = 0.0;
    double b = M_PI;
    int n = 10000000;

    double result_serial = trapezoid_serial(a, b, n);
    printf("Serial result: %lf\n", result_serial);

    return 0;
}

