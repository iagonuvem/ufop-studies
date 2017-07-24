#include <stdio.h>
/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

int main()
{
	int v = 1, c = 0;
	char texto[51], t_formated[51];
	int tamanho_str = 0;

	printf("Digite o texto:\n");
	gets(texto);

	for(int i = 0; texto[i] != '\0'; ++i){ // Percorre a string para saber quantas letras possui
		if(texto[i] != ' '){
			tamanho_str++;
			t_formated[c] = texto[i];
			c++;
		}
		
	}

	// puts(t_formated);
	for (int i = 0; texto[i] != '\0'; ++i)
	{
		if(texto[i] == '\0'){
			break;
		}
		else{
			if(t_formated[(tamanho_str-1)-i] != t_formated[i]){
				v = 0;
			}
		}
	}

	if(v == 1){
		printf("Palindromo\n");
	}else{
		printf("Nao Palindromo\n");
	}
	return 0;
}