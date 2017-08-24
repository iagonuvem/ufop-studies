#include <stdio.h>
#include <stdlib.h>

// Cria uma estrutura para definir  aluno, similar a um objeto
typedef struct regAluno
{
	char nome[40];
	float nota[3];
} Aluno;

int main(int argc, char const *argv[])
{
	//Apelido da estrura nome que vai no contexto atual
	Aluno alunos[5]; // 'Instancia' a estrutura

	printf("Informe os dados dos alunos:\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("Digite o nome\n");
		scanf(" %[^\n]s", alunos[i].nome);

		for (int j = 0; j < 3; ++j)
		{
			printf("Digite a nota %d\n" , j+1);
			scanf("%f", &alunos[i].nota[j]); 
		}
	}	


	for (int i = 0; i < 5; ++i)
	{
		printf("%s\n", alunos[i].nome);
		for (int j = 0; j < 3; ++j)
		{
			printf("Nota %d: %.2f\n" ,j+1, alunos[i].nota[j]);
		}
	}	
	return 0;
}