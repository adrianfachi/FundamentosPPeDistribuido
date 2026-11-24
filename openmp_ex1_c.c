#include <stdio.h>
#include <omp.h>
int main() {
	printf("sequencial\n");
	#pragma omp parallel
	{
	printf("paralelo, thread %d\n", omp_get_thread_num());
	} // barreira implícita aqui
	printf("sequencial de novo\n");
}