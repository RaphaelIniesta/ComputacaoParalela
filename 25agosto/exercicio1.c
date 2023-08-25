#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int menor = vet[0][0], linha = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(menor > vet[i][j]) {
                menor = vet[i][j];
                linha = i+1;
            }
        }
    }

    printf("Menor número: %d\nLinha: %d\n", menor, linha);
}
