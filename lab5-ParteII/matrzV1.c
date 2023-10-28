#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void mulriplica_matriz(int (*matrix) [3], int *vector, int *result, int threads) {
    # pragma omp parallel for num_threads(threads) // reduction(+:result)
    for (int i = 0; i < 3; i++) {
        result[i] = 0;
        for (int j = 0; j < 3; j++) {
            # pragma omp critical
            result[i] += matrix[i][j] * vector[j];
        }
    }
}

void print_vector(int *vector, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int vetor[3] = {1, 2, 3};
    int result[3] = {0, 0, 0};

    int num_threads;
    printf("Digite o número de threads: ");
    scanf("%d", &num_threads);
    
    mulriplica_matriz(matriz, vetor, result, num_threads);

    printf("Resultado:\n");
    print_vector(result, 3);

    return 0;
}
