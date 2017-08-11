#include <stdio.h>

// Escreva um programa em C que imprima os valores da diagonal principal de uma matriz quadrada 5*5
int main()
{
	int matriz[5][5];

	for (int i = 0; i < 5; ++i) // Preenchendo a matriz
	{
		for (int j = 0; j < 5; ++j)
		{
			matriz[i][j] = i;
		}
	}

	printf("Matriz:\n"); // Imprimindo a Matriz
	for (int i = 0; i < 5; ++i)
	 {
	 	printf("[");
	 	for (int j = 0; j < 5; ++j)
	 	{
	 		printf("%d ", matriz[i][j]);
	 	}
	 	printf("]\n");
	 } 

	printf("Diagonal Principal = ["); // Exibindo diagonal principal
	for (int i = 0; i < 5; ++i) 
	{
		printf("%d ", matriz[i][i]);
	}
	printf("]\n");
	return 0;
}