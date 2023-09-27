#include <stdio.h>
#include <stdlib.h>

void mult_matriz(int matriz[3][3], int vetor[3], int result[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i] += matriz[i][j] * vetor[j];
        }
    }

    printf("Resultado da Multiplicação: \n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");
}

int main() {
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int vetor[3] = {1,2,3};
    int result[3];

    mult_matriz(matriz, vetor, result);

    return 0;
}
