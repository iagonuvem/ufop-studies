#include <stdio.h>
// Matriz bidimensional de caracteres
int	main()
{
	/* Cria matriz de strings sendo o numero de linhas 
	igual ao numero de strings que podem ser armazenadas, e o numero de 
	colunas igual ao numero de caracteres de cada string */
	char nomes[5][100]; 
	float notas[5][2];
	float n1 = 0,n2 = 0;

	/* Lendo as strings,
	note que só é realizado o FOR para as linhas
	*/
	for (int i = 0; i < 5; ++i)
	{
		printf("Digite o nome do aluno\n");
		// gets(nomes[i]);
		scanf("%s", nomes[i]);

		for (int j = 0; j < 2; ++j)
		{
			printf("Nota %d:\n", j+1);
			scanf("%f", &notas[i][j]);
		}
		printf("\n");
	}
	

	// Imprimindo
	for (int i = 0; i < 5; ++i)
	{	
		n1 = 0;
		printf("Aluno(a): ");
		puts(nomes[i]);
		for (int j = 0; j < 2; ++j)
		{
			printf("Nota %d: %.2f\n",j+1,notas[i][j]);

			n1 += notas[i][j];
			n2 += notas[i][1];
		}
		
		printf("Media Aluno: %.2f\n", n1/2);
		printf("\n");
	}
	printf("Media Geral N1: %.2f\n", n2/5);

	return 0;
}