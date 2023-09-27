#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 3

int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int vetor[3] = {1, 2, 3};
int result[3] = {0, 0, 0};

void *multiply_row(void *arg) {
    int row = *(int *)arg;

    for (int j = 0; j < 3; j++) {
        result[row] += matriz[row][j] * vetor[j];
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_args[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_args[i] = i;
        pthread_create(&threads[i], NULL, multiply_row, &thread_args[i]);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Resultado da Multiplicação: \n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

