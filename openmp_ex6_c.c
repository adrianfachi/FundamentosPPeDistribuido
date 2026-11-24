#include <stdio.h>
#include <omp.h>

int main() {

    int vet[100], soma = 0;

    #pragma omp parallel for reduction(+:soma)
    for (int i = 0; i < 100; i++) {
        vet[i] = i * i;
        soma += vet[i];
    }

    for (int i = 0; i < 100; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    printf("Soma = %d\n", soma);

    return 0;
}