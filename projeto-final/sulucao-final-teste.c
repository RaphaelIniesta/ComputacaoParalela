#include <stdio.h>
#include <omp.h>
#include <gmp.h>

void calcular(unsigned long long max, mpf_t result) {
    int num_threads = omp_get_max_threads();
    mpf_t sum[num_threads], fact[num_threads], temp[num_threads];
    for(int i = 0; i < num_threads; i++) {
        mpf_init(sum[i]);
        mpf_init(fact[i]);
        mpf_init(temp[i]);
        mpf_set_ui(fact[i], 1);
    }

    # pragma omp parallel
    {
        int id = omp_get_thread_num();
        # pragma omp for
        for(int n = 1; n < max; n++) {
            mpf_mul_ui(fact[id], fact[id], n);
            mpf_ui_div(temp[id], 1, fact[id]);
            mpf_add(sum[id], sum[id], temp[id]);
        }
    }

    for(int i = 0; i < num_threads; i++) {
        mpf_add(result, result, sum[i]);
        mpf_clear(sum[i]);
        mpf_clear(fact[i]);
        mpf_clear(temp[i]);
    }
}

int main() {
    unsigned long long max;

    mpf_t euler;
    mpf_init(euler);

    printf("Número máximo de n: ");
    scanf("%ulld", &max);

    calcular(max, euler);

    gmp_printf("Aproximação de eˆ1 até o termo %llu é: \n %.100Ff\n", max, euler);
    mpf_clear(euler);

    return 0;
}

