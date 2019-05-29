#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char nome[10];
	float vendas,salario,total;

	gets(&nome);
	scanf(&salario);
	scanf(&vendas);

	total = salario + (vendas*0.15);

	printf("TOTAL = R$ %.2f\n", total);


	return 0;
}