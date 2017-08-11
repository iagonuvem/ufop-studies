#include <stdio.h>

/*Faça um programa que leia uns valores de uma matriz 3*3 que imprima a soma dos termos da matriz*/
int main()
{
	int matriz[3][3] , soma = 0;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Matriz [%d][%d]:", i,j);
			scanf("%d" , &matriz[i][j]);
			
			soma = soma + matriz[i][j];
		}
	}

	printf("Soma dos valores da matriz: %d\n" , soma);
	return 0;
}