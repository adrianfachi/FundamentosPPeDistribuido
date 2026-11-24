#include <stdio.h>
#include <omp.h>

int main() {

	int vet[100], soma = 0;
	// paraleliza as iterações do laço entre as threads
	#pragma omp parallel for
	for (int i = 0; i < 100; i++)
		vet[i] = i * i;

	//Soma = 328350
	 for (int i = 0; i < 100; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}