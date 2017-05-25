#include <stdio.h>

int main()
{
	int x;

	printf("Informe um numero\n");
	scanf("%d" , &x);

	// verifica se x é maior que 10
	if(x>10){
		printf("O valor e maior que 10\n");
	}

	printf("Fim do Programa\n");

	return 0;
}