#include <stdio.h>
// Escreva um programa que leia uma string e conte suas vogais
int	main()
{
	char text[30];
	int vog = 0;

	printf("Digite o texto:\n");
	gets(text);

	for (int i = 0; text[i] != '\0'; i++)
	{
		if(text[i] == '\0'){
			break;
		}
		else if(text[i] == 'a' || text[i] == 'A' ||  text[i] == 'e' || text[i] == 'E' || text[i] == 'i' || text[i] == 'I' || text[i] == 'o' || text[i] == 'O' || text[i] == 'u' || text[i] == 'U' ){
			vog++;
		}
	}

	printf("Numero de vogais: %d\n" , vog);

	return 0;
}