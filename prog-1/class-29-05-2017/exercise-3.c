#include <stdio.h>
#include <math.h>

// raiz quadrada em c = sqrt()

// Heron Formula's exercise
int main()
{
	int a, b, c, d ,p;

	printf("Digite um lado A\n");
	scanf("%d" , &a);
	printf("Digite um lado B\n");
	scanf("%d" , &b);
	printf("Digite um lado C\n");
	scanf("%d" , &c);
	printf("Digite um lado D\n");
	scanf("%d" , &d);

	p = a+b+c/2;

	if(sqrt(p * (p-a) * (p-b) * (p-c)) > 0){ // Se Maior que 0, é possivel formar um triangulo
		printf("ABC formam um triangulo\n");
	}
	else {
		printf("ABC nao formam um triangulo\n");
	}

	p = a+b+d/2;

	if(sqrt(p * (p-a) * (p-b) * (p-d)) > 0){
		printf("ABD formam um triangulo\n");
	}
	else {
		printf("ABD nao formam um triangulo\n");
	}

	p = a+c+d/2;

	if(sqrt(p * (p-a) * (p-c) * (p-d)) > 0){
		printf("ACD formam um triangulo\n");
	}
	else {
		printf("ACD nao formam um triangulo\n");
	}

	p = c+b+d/2;

	if(sqrt(p * (p-c) * (p-b) * (p-d)) > 0){
		printf("CBD formam um triangulo\n");
	}
	else{
		printf("CBD nao formam um triangulo\n");
	}

	return 0;
}