#include <stdio.h>

int somaintervalo(int n1, int n2){
	int soma;

	if(n1 > n2){
		soma = n2;
		for (int i = n2; i < n1; i++)
		{
			soma = soma + (i+1);	
		}
	}
	else if(n2 > n1){
		soma = n1;
		for (int i = n1; i < n2; i++)
		{
			soma = soma + (i+1);	
		}
	}else{ // Se os dois forem iguais
		soma = n1;
	}

	return soma;
}

int main(){
	int result , x , y;

	printf("Informe o primeiro numero\n");
	scanf("%d" , &x);

	printf("Informe o segundo numero\n");
	scanf("%d" , &y);


	result = somaintervalo(x,y);

	printf("Resultado: %d\n", result);
	return 0;
}