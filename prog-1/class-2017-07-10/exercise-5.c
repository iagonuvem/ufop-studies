#include <stdio.h>

int contaPadrao(char texto[], char padrao[]){
	int keep, cont = 0;


	for (int i = 0; texto[i+2] != '\0'; ++i)
	{
		if(texto[i] == padrao[0] && texto[i+1] == padrao[1] && texto[i+2] == padrao[2]){
			cont++;
		}
	
	}
	return cont;
}

int main()
{
	char texto[101],padrao[3];
	int c;
	printf("Digite o texto:\n");
	gets(texto);

	printf("Digite o padrao:\n");
	gets(padrao);

	c = contaPadrao(texto,padrao);

	printf("Numero de vezes que se repetiu: %d\n", c);
	return 0;
}