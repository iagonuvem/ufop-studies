#include <stdio.h>
#include <stdlib.h>

/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação
*/

int main(int argc, char const *argv[])
{
	struct aluno{
		char nome[100];
		int matricula;
		float coeficiente;
	};
	typedef struct aluno Aluno;

	Aluno* cria(char nome[], int matricula, float coeficiente){
		Aluno *al = (Aluno*)malloc(sizeof(Aluno));

		al->nome = nome;
		al->matricula = matricula;
		al->coeficiente = coeficiente;

		return al;
	}

	Aluno* atribui(Aluno *al, char nome[] , int matricula , float coeficiente){
		al->nome = nome;
		al->matricula = matricula;
		al->coeficiente = coeficiente;

		return al;
	}
	void libera(Aluno *al){
		free(al);
	}

	float retorna_coeficiente(Aluno *al){
		return al->coeficiente;
	}

	return 0;
}