#include <stdio.h>
/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

// Exercicio 7 - Pag 25
char conceito(int med){
	char result;

	if(med <= 49){
		result = 'D';
	}
	else if(med > 49 && med <= 69){
		result = 'C';
	}
	else if(med > 69 && med <= 89){
		result = 'B';
	}
	else if(med > 89 && med <= 100){
		result = 'A';
	}

	return result;
}

int main()
{
	int med;

	printf("Digite a media final do aluno:\n");
	scanf("%d" , &med);

	printf("Conceito: %c\n", conceito(med));
	return 0;
}