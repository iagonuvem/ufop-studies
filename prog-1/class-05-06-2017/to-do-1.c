/*
1 - ler dois numeros:
	se x > y , imprimir ordem ascendente
	se x < y , imprimir ordem decrescente
	se forem iguais, mostrar mensagem falando que são iguais

2 - Ler um numero e imprimir os numeros pares e multiplos de 3 de 0 ate ele
*/
#include <stdio.h>
int main()
{
	int n;

	printf("Digite um numero\n");
	scanf("%d" , &n);

	printf("Numeros Pares ate o numero digitado:\n");
	for (int i = 1; i < n; i++)
	{
		if(i % 2 == 0){
			continue; // continue the loop if the condition is true
		}
		printf("%d\n", i);
	}

	printf("Numeros multiplos de 3 ate o numero digitado:\n");
	for (int i = 1; i < n; i++)
	{
		if(i % 3 == 0){
			continue; // continue the loop if the condition is true
		}
		printf("%d\n", i);
	}

	return 0;
}
