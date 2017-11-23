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

	struct turma{
		int codigo;
		Aluno **al;
		int vagas;
		int matriculados;
	};
	typedef struct turma Turma;

	Aluno* alu_cria(char nome[], int matricula, float coeficiente){
		Aluno *al = (Aluno*)malloc(sizeof(Aluno));

		al->nome = nome;
		al->matricula = matricula;
		al->coeficiente = coeficiente;

		return al;
	}

	Aluno* alu_atribui(Aluno *al, char nome[] , int matricula , float coeficiente){
		al->nome = nome;
		al->matricula = matricula;
		al->coeficiente = coeficiente;

		return al;
	}
	void alu_libera(Aluno *al){
		free(al);
	}

	float alu_retorna_coeficiente(Aluno *al){
		return al->coeficiente;
	}


	Turma* tu_cria(int codigo, int vagas, int matriculados){
		Turma *tu = (Turma*)malloc(sizeof(Turma));
		tu->al = (Aluno**)malloc(vagas*sizeof(Aluno*));

		for (int i = 0; i < vagas; ++i)
		{
			tu->al[i] = (Aluno*)malloc(matriculados*sizeof(Aluno)); // Armazena endereço de memoria do aluno
		}

		tu->codigo = codigo;
		tu->vagas = vagas;
		tu->matriculados = matriculados;

		return tu;

	}
	Aluno* tu_atribui(Turma *tu, int codigo , int vagas, int matriculados){
		tu->codigo = nome;
		tu->vagas = vagas;
		tu->matriculados = matriculados;

		return tu;
	}
	void tu_libera(Turma *tu, int matriculados){
		for (int i = 0; i < matriculados; ++i)
		{
			free(tu->al[i]);
		}
		free(tu);
	}
	void tu_imprime(Turma *tu, int matriculados){
		for (int i = 0; i < matriculados; ++i)
		{
			Aluno *aluno = *al[i];
			printf("%s\n", aluno->nome);
		}
	}
	float tu_media(Turma *tu, int matriculados){
		float soma = 0;
		float media;
		for (int i = 0; i < matriculados; ++i)
		{
			Aluno *aluno = *al[i]; // *aluno recebe o conteúdo para quem *al na posição i aponta
			soma += aluno->coeficiente;
		}
		media = soma / matriculados;

		return media;
	}

	
	return 0;
}