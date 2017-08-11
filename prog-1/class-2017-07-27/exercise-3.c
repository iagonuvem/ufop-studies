#include <stdio.h>

/*
Escreva um programa que leia uma matriz 4*4 e uma funcao para achar o maior
valor dessa matriz, e outra função para achar o menor valor.
*/
int maior(int matriz[4][4]){
	int maior = matriz[0][0]; // Assume o maior como o primeiro elemento da matriz
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}

	return maior;
}
int menor(int matriz[4][4]){
	int menor = matriz[0][0]; // Assume o menor como o primeiro elemento da matriz
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
		}
	}

	return menor;
}
int maiorPar(int matriz[4][4]){
	int maiorP = -999999999;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(matriz[i][j] > maiorP && matriz[i][j] % 2 == 0){
				maiorP = matriz[i][j];
			}
		}
	}

	return maiorP;
}
int menorImpar(int matriz[4][4]){
	int menorI = 9999999999;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(matriz[i][j] < menorI && matriz[i][j] % 2 != 0){
				menorI = matriz[i][j];
			}
		}
	}

	return menorI;
}
int mediana(int matriz[4][4]){
	float m = calcMedia(matriz);
	int valor;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(matriz[i][j] >= m-1 && matriz[i][j] <= m+1){
				valor = matriz[i][j];
			}
		}
	}

	return valor;
}
float calcMedia(int matriz[4][4]){
	int soma = 0;
	float media;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			soma = soma + matriz[i][j];
		}
	}

	media = (float)soma/16;

	return media;
}
int main()
{
	int matriz[4][4];

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("Matriz[%d][%d]:", i , j);
			scanf("%d" , &matriz[i][j]);
		}
	}

	printf("Maior Valor da matriz: %d\n" , maior(matriz));
	printf("Menor Valor da matriz: %d\n" , menor(matriz));
	printf("Maior Valor PAR da matriz: %d\n" , maiorPar(matriz));
	printf("Menor Valor IMPAR da matriz: %d\n" , menorImpar(matriz));
	printf("Media da soma da matriz: \n" , calcMedia(matriz));

	return 0;
}