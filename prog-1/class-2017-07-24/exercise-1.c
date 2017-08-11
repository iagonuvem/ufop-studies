#include <stdio.h>
//Escreva um programa que leia uma matriz 5*5 e exiba a matriz transposta desta matriz
// ps: a matriz pode ser inicializada ou passada pelo usuário
int main()
{
	// Para testar mais facil hueheuh
	int m[5][5] = { 
				{0,0,0,0,0},
				{1,1,1,1,1},
				{2,2,2,2,2},
				{3,3,3,3,3},
				{4,4,4,4,4}
			};

	for (int i = 0; i < 5; ++i)
	{
		printf("[");
		for (int j = 0; j < 5; ++j)
		{
			printf("%d\t", m[j][i]);
		}
		printf("]\n");
	}
	return 0;
}