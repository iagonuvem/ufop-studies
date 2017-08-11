#include <stdio.h>

void separa(char text[101]){
	for (int i = 0; text[i] != '\0'; i++)
	{
		if(text[i] == '\0'){
			break;
		}
		else{
			printf("%c", text[i]);
			if(text[i+1] != '\0'){
				printf("-");
			}
		}
		
	}
	printf("\n");
}

int main()
{
	char text[101];

	printf("Digite um texto:\n");
	gets(text);

	separa(text);
	return 0;
}