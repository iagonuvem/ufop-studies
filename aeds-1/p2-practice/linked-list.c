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
				p->ant = NULL;
			}
			else{
				l->ant = p;
			}
			
			l = p;
		}
	}

	return l;
	
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
	free(a);
	free(b);
	return p;
}

int main()
{

	int n = 5;
	int *v = (int*) malloc(n * sizeof(int));
	int *v2 = (int*) malloc(n * sizeof(int));

	// preencher os vetores
	for (int i = 0; i < n; ++i)
	{
		v[i] = i+1;
		v2[i] = 2*i;
	}
	
	No* lista1 = constroi(n,v);
	No* lista2 = constroi(n,v2);

	printf("Lista 1:\n");
	imprime(lista1);

	printf("Lista 2:\n");
	imprime(lista2);

	No* i = intersecao(lista1,lista2);

	printf("Intersecao das listas:\n");
	imprime(i);

	return 0;
}