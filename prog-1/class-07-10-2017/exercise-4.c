#include <stdio.h>

int cryp(char text[101]){
	char result[101];
	int cont = 0;

	for (int i = 0; text[i] != '\0'; ++i)
	{
		if(text[i] == 'a'){
			cont++;
			result[i] = 'b';
		}else{
			result[i] = text[i];
		}
	}

	printf("Texto Criptografado:\n");
	puts(result);

	return cont;
}

int main()
{	
	char texto[101];
	int cont;

	printf("Digite o texto:\n");
	gets(texto);

	cont = cryp(texto);

	printf("Letras modificadas:\n");
	printf("%d\n", cont);

	return 0;
}