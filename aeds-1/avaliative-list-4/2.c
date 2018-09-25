#include <stdio.h>

/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação

/**
* Questão 2
* @param [a] - arvore - Arv
* @param [n] - numero de critério para contar os menores - int
* @return [Quantidades de numeros menores que n] - int
*/

int menorDez(Arv* a, int n){
	if(!vazia(a)){
		if(a->info < n){
			return 1 + menorDez(a->esq) + menorDez(a->dir);	
		}
		else{
			return 0 + menorDez(a->esq) + menorDez(a->dir);
		}
	}
	return 0;
}