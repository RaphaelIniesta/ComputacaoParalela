#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

double f(double x) {
    return sin(x);
}

double trapezoid_parallel(double a, double b, int n, int threads) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
   
   # pragma omp parallel for num_threads(threads)
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        # pragma omp critical
        // #pragma omp parallel for reduction(+:sum)
        sum += f(x);
    }
    return h * sum;
}

int main() {
    double a = 0.0;
    double b = M_PI;
    int n = 10000000;

    int threads;

    printf("Insira a quantidade de Threads desejadas: ");
    scanf("%d", &threads);

    double result_parallel = trapezoid_parallel(a, b, n, threads);
    printf("Parallel result: %lf\n", result_parallel);

    return 0;
}

