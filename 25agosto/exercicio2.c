#include <stdio.h>

int main() {
    float n1=5, n2=7, n3=10; 
    float me = (n1+n2+n3)/3;

    float ma = (n1+n2*2+n3*3+me)/7;

    if(ma >= 9) {
        printf("Nota A\n");
    } else if (ma >= 7.5 && ma < 9) {
        printf("Nota B\n");
    } else if (ma >= 6 && ma < 7.5) {
        printf("Nota C\n");
    } else if(ma >= 4 && ma < 5) {
        printf("Nota D\n");
    } else {
        printf("Nota E\n");
    }
}
