#include <stdio.h>

/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação

/**
* Questão 5
* @param [h] - heap para busca - Heap 
* @param [i] - indice do nó para saber os filhos - int
* @return [Quantidades de filhos] - int
*/

int contFilhos(Heap* h, int i){
	// inicia um contador
	int c = 0;
	//Armazena o INDICE do Filho a esquerda em uma varíavel
	int fesq = i*2 + 1;
	//Armazena o INDICE do Filho a direita em uma varíavel
	int fdir = i*2 + 2;

	// Verifica se o indice procurado esta dentro da heap
	if(!(i > h->pos-1)){
		if(i < h->pos){
			// Caso o indice do filho a esquerda seja menor do que a posição máxima ocupada pela heap...
			if(fesq < h->pos){
				//Significa que existe um nó nesse indice, incrementa o contador de nós
				c++;
			}
			if(fdir < h->pos){
				c++;
			}
		}
		return c;
	}
	// Se o indice não estiver dentro do heap, retorna -1 conforme pedido na questão
	return -1;
}
