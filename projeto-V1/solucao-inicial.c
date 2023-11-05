#include <stdio.h>
#include <omp.h>

double factorial(int n) {
    double fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double calcular(unsigned long long max) {
    double sum = 0.0;
    #pragma omp parallel for reduction(+:sum)
    for(int n = 0; n < max; n++) {
        sum += 1.0 / factorial(n);
    }
    return sum;
}

int main() {
    unsigned long long max;

    printf("Número máximo de n: ");
    scanf("%ulld", &max);

    double euler = calcular(max);
    printf("Aproximação de e^1 até o termo %d é: %.100f\n", max, euler);
    return 0;
}

