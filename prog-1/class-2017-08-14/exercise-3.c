#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int *p = NULL, *q = NULL , *t = NULL, x;

	printf("Digite o tamanho do vetor:\n");
	scanf("%d" , &x);

	t = &x;

	p = (int*) calloc(*t, sizeof(int));
	q = (int*) malloc(*t * sizeof(int)); 

	for (int i = 0; i < *t; ++i)
	{
		p[i] = 1; 
		q[i] = 2;
	}

	printf("P: [");
	for (int i = 0; i < *t; ++i)
	{	
		printf("%d ", p[i]);
	}
	printf("];\n");

	printf("Q: [");
	for (int i = 0; i < *t; ++i)
	{
		printf("%d ", q[i]);
	}
	printf("];");

	free(p); // Libera o espaço de memória em q
	free(q); // Libera o espaço de memória em p

	return 0;
}