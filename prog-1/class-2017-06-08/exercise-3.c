#include <stdio.h>
/*
Write a program that read N values and find the bigger and the smaller one, showing the results
*/
int main()
{
	int i=0, n , num , maior = 0, menor = 0;

	printf("Digite o numero de vezes que ira repetir:\n");
	scanf("%d" , &n);

	do{
		printf("digite um numero:\n");
		scanf("%d" , &num);	
		
		if(i==0){
			maior = num;
			menor = num;
		}

		if(num > maior){
			maior = num;
		}
		else if(num < menor){
			menor = num;
		}

		i++;
	}while(i < n);

	printf("maior: %d\n", maior);
	printf("menor: %d\n", menor);

	return 0;
}