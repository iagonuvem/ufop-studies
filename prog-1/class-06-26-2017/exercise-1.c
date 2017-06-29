#include <stdio.h>
#include <math.h>

int delta(int a, int b, int c){
	int d = pow(b , 2) - 4*a*c;
	return d;
}
// Para Raiz de Delta positivo
int x1(int b , int a , int delta){
	int result = (-b + sqrt(delta)) / (2 * a);
	return result;
}
// Para Raiz de delta negativo 
int x2(int b, int a, int delta){
	int result = (-b - sqrt(delta)) / (2 * a);
	return result;
}

int	main()
{
	int a,b,c,d;

	printf("--- Formula de Bhaskara ---\n");
	
	printf("Informe o valor de A:\n");
	scanf("%d" , &a);

	printf("Informe o valor de B:\n");
	scanf("%d" , &b);

	printf("Informe o valor de C:\n");
	scanf("%d" , &c);

	d = delta(a,b,c);

	 // para melhor visualização
	printf("\n");
	
	if(d > 0){
		printf("x1 : %d\n", x1(b,a,d));
		printf("x2 : %d\n", x2(b,a,d));
	}
	else if( d == 0){
		printf("Unica Raiz: %d\n", x1(b,a,d));
	}
	else{
		printf("Nao e possivel calcular!\n");
	}
	
	return 0;
}