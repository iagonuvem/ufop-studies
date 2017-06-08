#include <stdio.h>
/*Acumulative variables*/
int main()
{
	int i,n,soma, temp;

	soma = 0;

	printf("Digite a quantidade de numeros\n");
	scanf("%d" , &n);

	for (int i = 1; i <= n; i++)
	{
		printf("Digite o %dº numero:\n", i);
		scanf("%d" , &temp);

		soma = soma + temp;
	}

	printf("Soma = %d" , soma);
	
	return 0;
}