#include <stdio.h>

// gets & puts functions

int main()
{
	char nome[30];

	// Gets & Puts are only used for STRINGS
	printf("Informe seu nome: \n");
	gets(nome); // Reads string
	// scanf("%[^\n]s" , nome) // for type CHAR don't use "&" in 'scanf' function

	printf("O seu nome e:\n");
	puts(nome); // Print strig

	return 0;
}