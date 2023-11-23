#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

void calcular(unsigned long long max, mpf_t result) {
    mpf_t sum, fact, temp;
    mpf_init(sum);
    mpf_init(fact);
    mpf_init(temp);
    mpf_set_ui(fact, 1);

    for(int n = 1; n < max; n++) {
        mpf_mul_ui(fact, fact, n);
        mpf_ui_div(temp, 1, fact);
        mpf_add(sum, sum, temp);
    }

    mpf_add(result, result, sum);
    mpf_clear(sum);
    mpf_clear(fact);
    mpf_clear(temp);
}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Uso: %s <max>\n", argv[0]);
        return 1;
    }

    unsigned long long max = strtoull(argv[1], NULL, 10);
    mpf_set_default_prec(999999);

    mpf_t euler;
    mpf_init(euler);

    calcular(max, euler);

    gmp_printf("Aproximação de eˆ1 até o termo %llu é: \n %.10000Ff\n", max, euler);
    mpf_clear(euler);

    return 0;
}

