#include <stdio.h>

int main()
{
	int x,y,result;

	printf("Informe um numero x\n");
	scanf("%d" , &x);

	printf("Informe um numero y\n");
	scanf("%d" , &y);

	// verifica se x é maior que 10
	if(x > y){
		result = x + y;
		printf("O resultado e: %d\n");
	}
	else{
		result = x * y;
		printf("O resultado e: %d\n");
	}

	printf("Fim do Programa\n");

	return 0;
}