#include <stdio.h>
#include <stdlib.h>

// Alocação dinâmica de memória
int main(int argc, char const *argv[])
{
	int *p = NULL, *q = NULL;

	// sizeof = retorna o tamanho do tipo passado como parâmetro
	p = (int*) calloc(5, sizeof(int)); // similar a criar um vetor de 5 posições do tipo inteiro
	/* altera apenas o parâmetro, 
	note que em 'calloc' passa-se o tamanho e tamanho do tipo,
	em 'malloc' passa-se a quantidade de bytes, que é a multiplicação dos dois parametros da função 'calloc'*/
	q = (int*) malloc(5 * sizeof(int)); 

	for (int i = 0; i < 5; ++i)
	{
		p[i] = 1; 
		q[i] = 2;
	}

	free(p); // Libera o espaço de memória em q
	free(q); // Libera o espaço de memória em p

	return 0;
}