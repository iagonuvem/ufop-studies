#include <stdio.h>
/*Faça um programa que o usuario digite os valores de uma matriz 4*3
e no final imprima estes numeros multiplicados por 
um escalar de valor 3,5*/
int main()
{
	float m[4][3], k = 3.5;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Matriz[%d][%d] : ", i , j);
			scanf("%f" , &m[i][j]);
			m[i][j] = k * m[i][j];
		}
	}

	// Imprimindo
	for (int i = 0; i < 4; ++i)
	{
		printf("[");
		for (int j = 0; j < 3; ++j)
		{
			printf("%.2f\t", m[i][j]);
		}
		printf("]\n");
	}
	return 0;
}