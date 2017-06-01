#include <stdio.h>
#include <math.h>

// raiz quadrada em c = sqrt()

// Heron Formula's exercise
int main()
{
	int a, b, c, d ,p;

	printf("Digite um lado\n");
	scanf("%d" , &a);
	printf("Digite um lado\n");
	scanf("%d" , &b);
	printf("Digite um lado\n");
	scanf("%d" , &c);
	printf("Digite um lado\n");
	scanf("%d" , &d);

	p = a+b+c/2;

	if(sqrt(p * (p-a) * (p-b) * (p-c)) > 0){ // Se Maior que 0, é possivel formar um triangulo
		printf("S/n");
	}

	p = a+b+d/2;

	if(sqrt(p * (p-a) * (p-b) * (p-d)) > 0){
		printf("S/n");
	}

	p = a+c+d/2;

	if(sqrt(p * (p-a) * (p-c) * (p-d)) > 0){
		printf("S/n");
	}

	p = c+b+d/2;

	if(sqrt(p * (p-c) * (p-b) * (p-d)) > 0){
		printf("S/n");
	}
	else{
		printf("N\n");
	}

	return 0;
}