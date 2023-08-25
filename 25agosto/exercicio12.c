#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char choice = 'f';

    for (int i = 0; i < 26; i++) {
        if(string[i] == choice) {
            printf("O caracter escolhido está na posição %d da string", i);
        }
    }
}
