#include <stdio.h>

/*
Write a program that reads N values,
count wich of this is negative and wich is positive and show those informations
*/
int main()
{
	int num, n , pos = 0, neg = 0;

	// Pede o usuário para digitar o numero de vezes que o programa ira verificar os numeros
	printf("Digite N\n");
	scanf("%d" , &n);

	// Faz a repetição do trecho de código de acordo com o numero N digitado
	for (int i = 0; i < n; i++)
	{
		printf("Digite um numero\n");
		scanf("%d" , &num);

		// Verifica se é negativo 
		if(num < 0){
			neg++; // Adiciona 1 no contador do negativo
		}
		else if( num > 0){ // ou positivo
			pos++; // Adiciona 1 no contador do positivo
		}
	}

	printf("Numeros Negativos: %d\n", neg);
	printf("Numeros Positivos: %d\n", pos);


	return 0;
}