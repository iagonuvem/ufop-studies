#include <stdio.h>
#include <math.h>

void questao2(int n){
	int *p = NULL;
	int aux = 0;
	float media;

	// cria um vetor com alocação dinamica
	p = (int*) malloc(n,sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		p[i] = pow(n,i) + (3 * n) + 5; // preenche o vetor
		aux += p[i]; // somar as entradas do vetor
	}
	media = aux / n;

	printf("Media: %.2f\n", media);

	free(p);
}

int main(int argc, char const *argv[])
{
	int x;

	printf("Digite o numero de posicoes do vetor\n");
	scanf("%d", &x);

	questao2(x);

	return 0;
}