#include <stdio.h>

/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação
*/

struct no{
	int info;
	struct no* ant;
	struct no* prox;
};
typedef struct no No;

No* constroi(int n, int* v){
	No* l = NULL;
	
	if(n == 0){
		return l;
	}
	else{
		for(int i=0; i<n; i++){
			No* p = (No*)malloc(sizeof(No));
			p->info = v[i];
			p->prox = l;
			if(i==0){
				p->prox = NULL;
			}
			else{
				l->ant = p;
			}
			
			l = p;
		}
	}

	return l;
	
}

int* constroi_vetor(No* lista){
	int cont = 0; // Contador para saber quantos nós tem a lista

	No* p = (No*) malloc(sizeof(No));
	for ( p = lista; p != NULL; p = p->prox) // Percorre a lista para contar os nós
	{
		cont++; 
	}

	if(cont > 0){ // Se a lista não for vazia(tiver mais de 0 elementos)
		int* v = (int*) malloc(cont * sizeof(int)); // aloca o vetor de acordo com o numero de nós
	
		int i = 0;
		p = lista;
		while(p != NULL){
			v[i] = p->info; 
			p = p->prox;
			i++;
		}

		return v; // retorna o vetor;
	}
	
	return 0;
}

void imprime(No* l){
	No* p;
	
	for(p = l; p != NULL; p = p->prox){
		printf("%d -> ", p->info);
	}
	printf("\n");
}

No* intersecao(No* lista1, No* lista2){
	No* a = (No*) malloc(sizeof(No));
	No* b = (No*) malloc(sizeof(No));
	
	No* p = (No*) malloc(sizeof(No)); // Aloca um novo nó da nova lista
	p = NULL; // Inicia o nó vazio
	

	for (a = lista1; a != NULL; a = a->prox){ // Percorre a lista 1
		/*
		Para cada elemento percorrido da lista 1 , percorre a lista 2
		até achar um elemento igual (ou não);
		*/
		for (b = lista2; b != NULL; b = b->prox){
			if(a->info == b->info){ // Se achar correspondencia
				No* novo = (No*) malloc(sizeof(No));
				novo->info = a->info;
				novo->prox = p;
				novo->ant = NULL;
				
				if(p != NULL){ // se existir algum nó...
					p->ant = novo;
				}
				p = novo;
				break; // Para o Loop
			}
		}
	}

	return p;
}

int main()
{

	int n = 5;
	int *v = (int*) malloc(n * sizeof(int));

	// preencher os vetores
	for (int i = 0; i < n; ++i)
	{
		v[i] = i+1;
	}
	
	No* lista1 = constroi(n,v);

	printf("Lista 1:\n");
	imprime(lista1);

	int* vet = constroi_vetor(lista1);

	printf("Vetor da lista: [");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", vet[i]);
	}
	printf("]\n");

	return 0;
}