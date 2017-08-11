#include <stdio.h>

/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

void preencheDados(char nomes[][16] , float notas[][2] ){
	/* Lendo as strings*/
	for (int i = 0; i < 10; ++i)
	{
		printf("Digite o nome do aluno\n");
		// gets(nomes[i]);
		scanf("%s", nomes[i]);

		/* Lendo as notas*/
		for (int j = 0; j < 2; ++j)
		{
			printf("Nota %d:\n", j+1);
			scanf("%f", &notas[i][j]);
		}
		printf("\n");
	}
}
void calculaMedia(float notas[][2], float media[10]){
	int aux;
	// Imprimindo
	for (int i = 0; i < 10; ++i)
	{	
		aux = 0;
		for (int j = 0; j < 2; ++j)
		{
			aux += notas[i][j];
		}
		media[i] = aux/2;
	}
}

void imprime(char nomes[][16] , float notas[][2] , float media[]){
	// Imprimindo
	for (int i = 0; i < 10; ++i)
	{	
		printf("Aluno(a): ");
		puts(nomes[i]);
		for (int j = 0; j < 2; ++j)
		{
			printf("Nota %d: %.2f\n",j+1,notas[i][j]);
		}
		
		printf("Media Aluno: %.2f\n", media[i]);
		printf("\n");
	}
}

int	main()
{
	/* Cria matriz de strings sendo o numero de linhas 
	igual ao numero de strings que podem ser armazenadas, e o numero de 
	colunas igual ao numero de caracteres de cada string */

	char nomes[10][16]; 
	float notas[10][2];
	float media[10];

	preencheDados(nomes,notas);
	calculaMedia(notas,media);
	imprime(nomes,notas,media);

	return 0;
}