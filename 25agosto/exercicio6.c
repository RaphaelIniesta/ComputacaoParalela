#include <stdio.h>

int main() {
    int rows = 3, cols = 4;
    int matriz[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int transposta[cols][rows];

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

