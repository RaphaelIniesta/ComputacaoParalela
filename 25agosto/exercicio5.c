#include <stdio.h>

int main() {
    int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int mult = 3;

    // Multiplicar Linha
    for(int i = 0; i < 4; i++) {
        int linha = 0;
        for(int j = 0; j < 4; j++) {
            linha += matriz[i][j] * mult;
        }
        printf("Multiplcação da linha %d: %d\n", i+1, linha);
    }

    printf("\n");

    // Multiplicar Coluna
    for(int i = 0; i < 4; i++) {
        int coluna = 0;
        for(int j = 0; j < 4; j++) {
            coluna += matriz[j][i] * mult;
        }
        printf("Multiplcação da coluna %d: %d\n", i+1, coluna);
    }

    return 0;
}
