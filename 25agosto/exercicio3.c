#include <stdio.h>

int main() {
    int maxNumber = 11;

    // Gerar a saída
    for (int i = 0; i <= maxNumber / 2; i++) {
        // Imprimir espaços iniciais
        for (int j = 0; j < i; j++) {
            printf("   ");
        }

        // Imprimir números
        for (int j = i + 1; j <= maxNumber - i; j++) {
            printf("%2d ", j);
        }
        printf("\n");
    }

    return 0;
}

