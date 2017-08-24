#include <stdio.h>
#include <stdlib.h>
/*
1 - Criar uma estrutura para ler o nome e 2 notas de 2 alunos,
calcular a média e verificar se foi aprovado ou não
*/

// Cria uma estrutura para definir  aluno, similar a um objeto
typedef struct regAluno
{
	char nome[40];
	float nota[2];
	float media;
	int resultado;
} Aluno;

int main(int argc, char const *argv[])
{
	/*
	Uso de struct (instanciação)
	APELIDO instancia[tamanho(opcional)];
	*/
	Aluno alunos[2]; // 'Instancia' a estrutura
	float aux;

	printf("Informe os dados dos alunos:\n");
	for (int i = 0; i < 2; ++i)
	{
		printf("Digite o nome\n");
		scanf(" %[^\n]s", alunos[i].nome);
		aux = 0;
		for (int j = 0; j < 2; ++j)
		{
			printf("Digite a nota %d\n" , j+1);
			scanf("%f", &alunos[i].nota[j]); 
			aux += alunos[i].nota[j]; // Soma as notas através de uma variável acumuladora
		}
		alunos[i].media = aux / 2; // Divide a soma das notas pela quantidade de notas, no caso, definida anteriormente como 2.
		
		// Verifica e armazena a situação do aluno de acordo com a media
		if(alunos[i].media >= 6){
			alunos[i].resultado = 1; // Aluno aprovado
		}
		else{
			alunos[i].resultado = 0; // Aluno reprovado
		}
	}	


	for (int i = 0; i < 2; ++i)
	{
		printf("%s\n", alunos[i].nome);
		for (int j = 0; j < 2; ++j)
		{
			printf("\tNota %d: %.2f\n" ,j+1, alunos[i].nota[j]);
		}
		printf("\tMedia : %.2f\n", alunos[i].media);
		printf("\tResultado : %d\n", alunos[i].resultado);
	}	
	return 0;
}