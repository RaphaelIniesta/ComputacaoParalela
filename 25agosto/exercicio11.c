#include <stdio.h>

int main() {
    int rows = 2, cols = 4;
    int matriz[2][4] = {{1,2,3,4},{5,6,7,8}};

    for (int j = 0; j < rows; j++) {
        for(int k = 0; k < cols; k++)
            printf("%d ", matriz[j][k]);
        printf("\n");
    }

    for(int i = 0; i < cols; i++)
        matriz[1][i] += matriz[0][i];

    for (int j = 0; j < rows; j++) {
        for(int k = 0; k < cols; k++)
            printf("%d ", matriz[j][k]);
        printf("\n");
    }

    return 0;
}
