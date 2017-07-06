#include <stdio.h>

int main()
{
	int tamanho=5,vetora[5], vetorb[5], mult, acum = 0; 
	
	printf("--- Leitura do Vetor A ---\n");
	printf("\n");
	for (int i = 0; i < tamanho; i++)
	{
		printf("Vetor A [%d]:\n" , i);
		scanf("%d" , &vetora[i]);	
	}

	printf("--- Leitura do Vetor B ---\n");
	printf("\n");
	for (int i = 0; i < tamanho; i++)
	{
		printf("Vetor B [%d]:\n" , i);
		scanf("%d" , &vetorb[i]);	
	}
	// Operações
	for (int i = 0; i < tamanho; i++)
	{
		mult = vetora[i]*vetorb[i];	
		acum = acum + mult;
	}
	printf("Resultado Final: %d\n", acum);

	return 0;
}