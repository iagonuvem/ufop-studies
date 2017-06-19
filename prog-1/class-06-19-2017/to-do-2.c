#include <stdio.h>

/* Criar uma função que calcule e imprima a potencia 
de um numero de acordo com a base e o expoente fornecidos*/

int potencia(int base, int expoente){
	int result , aux;
	for(int i = 1; expoente > i; i++){
		if(i == 1){
			result = base * base;	
		}
		else{
			result = aux * base;
		}
		aux = result;
	}

	return aux;
}
int main(int argc, char const *argv[])
{
	int b,e,p;

	printf("Digite a base:\n");
	scanf("%d" , &b);

	printf("Digite o expoente:\n");
	scanf("%d" , &e);

	p = potencia(b,e);

	printf("Resultado: %d\n", p);

	/* code */
	return 0;
}