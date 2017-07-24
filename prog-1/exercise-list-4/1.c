#include <stdio.h>
/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

void preencheNota(float nota1[], float nota2[], int n){

	for (int i = 0; i < n; ++i)
	{
		printf("\n");
		printf("\n --- Aluno %d ---\n", i+1);

		printf("Digite a nota 1:\n");
		scanf("%f" , &nota1[i]);

		printf("Digite a nota 2:\n");
		scanf("%f" , &nota2[i]);
	}

}

void calculaMedia(float nota1[], float nota2[], float media[], int n){
	for (int i = 0; i < n; ++i)
	{
		media[i] = (nota1[i] + nota2[i]) / 2;
	}
}

void imprime(float nota1[], float nota2[], float media[], int n){
	for (int i = 0; i < n; ++i)
	{
		printf("\n");
		printf("\n--- Aluno %d ---\n", i+1);
		printf("Nota 1: %.2f\nNota 2: %.2f\nMedia: %.2f", nota1[i],nota2[i],media[i]);
	}
}

int main()
{
	int n = 10;
	float nota1[10],nota2[10],media[10];

	preencheNota(nota1, nota2, n);
	calculaMedia(nota1, nota2, media, n);
	imprime(nota1, nota2, media, n);

	return 0;
}