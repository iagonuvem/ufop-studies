#include <stdio.h>

void maior_menor(int vetor[3], int *maior, int *menor){
	// Associa o menor e o maior valor à primeira posição do vetor
	*maior = vetor[0];
	*menor = vetor[0]; 

	for (int i = 0; i < 3; ++i)
	{
		if(vetor[i] > *maior){
			*maior = vetor[i];
		}

		if(vetor[i] < *menor){
			*menor = vetor[i];
		}
	}

	printf("Maior: %d , Menor : %d (usando ponteiros)\n", *maior, *menor);
}

int main(int argc, char const *argv[])
{
	int vetor[3];
	int mai, men;
	int *maior = NULL, *menor = NULL;

	maior = &mai;
	menor = &men;

	// preenche o vetor
	for (int i = 0; i < 3; ++i)
	{
		printf("Digite um numero:\n");
		scanf("%d" , &vetor[i]);
	}

	maior_menor(vetor,maior,menor);

	// printf("Maior: %d , Menor : %d (usando variaveis)\n", mai, men);
	// printf("Maior: %d , Menor : %d (usando ponteiros)\n", *maior, *menor);

	return 0;
}