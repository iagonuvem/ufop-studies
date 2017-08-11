#include <stdio.h>

//Vetores
int main()
{
	int tamanho=3;

	// printf("Digite o tamanho do vetor:\n");
	// scanf("%d" , &tamanho);

	// Cria o vetor com o tamanho designado
	int vetor[3];

	for (int i = 0; i < tamanho; i++)
	{
		printf("Digite o Valor da posicao %d do vetor\n", i);
		scanf("%d" , &vetor[i]);
	}

	printf("Leitura Realizada com sucesso!\n");

	// Impressão dos valores armazenados no vetor
	for (int i = 0; i < tamanho; ++i)
	{
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}