#include <stdio.h>

int main() {
    int matriz[3][3] = {{-1,2,3},{4,-5,6},{7,8,-9}};

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(matriz[i][j] < 0)
                matriz[i][j] *= -1;

    for(int k = 0; k < 3; k++) {
        for(int l = 0; l < 3; l++)
            printf("%d", matriz[k][l]);
        printf("\n");
    }
}
