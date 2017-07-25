#include <stdio.h>

/*Escrever um programa em C que leia todas as posicoes
de uma matriz 5*5 e em seguida exibir o numero de posições nao nulas da matriz*/
int main()
{
	int matriz[5][5], cont = 0;

	for (int i = 0; i < 5; ++i)
	{
		printf("-- Linha %d --\n", i+1);
		for (int j = 0; j < 5; ++j)
		{
			printf("Digite um valor:\n");
			scanf("%d" , &matriz[i][j]);
			if(matriz[i][j] != 0){
				cont++;
			}
		}
	}

	printf("Posicoes nao-nulas: %d\n", cont);
	printf("Lista de Posicoes nao-nulas:\n");
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if(matriz[i][j] != 0){
				printf("matriz[%d][%d] = %d;\n", i, j, matriz[i][j]);
			}

		}
	}

	return 0;
}