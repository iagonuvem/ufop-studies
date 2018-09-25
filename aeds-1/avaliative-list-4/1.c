#include <stdio.h>
/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação

/**
* Questão 1
* @param [a] - Arvore base - Arv
* @return [0 || 1] - int
*/
int degenerada(Arv* a){
	if(a != NULL){
		// Se os DOIS filhos não forem nulos, não é degenerada...
		if(a->esq != NULL && a->dir != NULL){
			return 0;
		}
		//Chegou no nó folha, significa que percorreu toda a árvore sem encontrar um nó com mais de 1 filho 
		else if(a->esq == NULL && a->dir == NULL){
			// logo, a árvore é degenerada
			return 1;
		}
		// Chama a função recursivamente para esquerda ou direita, de acordo com o nó que não é Nulo
		else if(a->esq != NULL && a->dir == NULL){
			return degenerada(a->esq);
		}
		else if(a->dir != NULL && a->esq == NULL){
			return degenerada(a->dir);
		}	
	}
	return 0;
}