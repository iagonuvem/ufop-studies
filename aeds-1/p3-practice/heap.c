#include <stdio.h>

struct heap {
	int max;
	int pos;
	float* vetor;
}; typedef struct heap Heap;

Heap* criaHeap(int m){
	Heap* h=(Heap*)malloc(sizeof(Heap));
	h->max=m;
	h->pos=0;
	h->vetor=(float*)malloc(m*sizeof(float));
	return h;
}

void corrigeAbaixo(Heap* h, int i){
	float aux=h->vetor[i];
	int filho=i*2+1;
	while(filho<=h->pos-1){
		if(filho < h->pos - 1)
			if(h->vetor[filho] < h->vetor[filho+1])
				filho=filho+1;
		if(aux<h->vetor[filho]){
			h->vetor[i]=h->vetor[filho];
			i=filho;
			filho=i*2+1;
		}
		else
			filho=h->pos;
	}
	h->vetor[i]=aux;
}

void corrigeAcima(Heap* h, int i){
	while(i > 0){
		int pai = (i-1)/2;
		if(h->vetor[pai] < h->vetor[i]){
			float aux = h->vetor[pai];
			h->vetor[pai] = h->vetor[i];
			h->vetor[i] = aux;
		}
		else 
			break;
		i = pai;
	}
}


void construirHeap(Heap* h){
	int i;
	for (i=(h->pos-1)/2;i>=0;i--){
		corrigeAbaixo(h, i);
	}
}

void imprimeHeap(Heap* h){
	int i;
	for (i=0;i<h->pos;++i){
		printf("[%.1f]", h->vetor[i]);
	}
}


int contFilhos(Heap* h, int i){
	// inicia um contador
	int c = 0;
	//Armazena o INDICE do Filho a esquerda em uma varíavel
	int fesq = i*2 + 1;
	//Armazena o INDICE do Filho a direita em uma varíavel
	int fdir = i*2 + 2;

	// Verifica se o indice procurado esta dentro da heap
	if(i <= h->pos-1){
		// Caso o indice do filho a ESQUERDA seja menor do que a posição máxima ocupada pela heap...
		if(fesq < h->pos){
			//Significa que existe um nó nesse indice, incrementa o contador de nós
			c++;
		}
		// Caso o indice do filho a DIREITA seja menor do que a posição máxima ocupada pela heap...
		if(fdir < h->pos){
			//Significa que existe um nó nesse indice, incrementa o contador de nós
			c++;
		}
		
		return c;
	}
	// Se o indice não estiver dentro do heap, retorna -1 conforme pedido na questão
	return -1;
}


void insereHeap(Heap* h, float v){
	if(h->pos < h->max){
		h->vetor[h->pos] = v;
		corrigeAcima(h,h->pos);
		h->pos++;
	}
	else
		printf("Heap Cheio\n");
}

void insereHeap2(Heap* h,Heap* h2){
	// Se o heap 1 não for vazio..
	if (h->pos > 0){
		for (int i = h2->pos , j = 0; j < h->pos; ++i, ++j){
			if (i < h2->max){ 
				h2->vetor[i] = h->vetor[j];
				corrigeAcima(h2,i);
				h2->pos++;
			}else{
				// Caso não de para inserir mais nenhum elemento no Heap 2,para o loop 
				break;
			}
		}
	}
	else{
		printf("Heap 1 vazia!\n");
	}
}


void modificaPrioridade(Heap* h, int i, float novo_valor){
	// Verifica se o indice está dentro do limite do Heap
	if (i < h->pos){
		// verifica se o novo valor é maior do que o já existente
		if(novo_valor > h->vetor[i] ){
			h->vetor[i] = novo_valor;
			// Se for maior, corrige o heap para cima
			corrigeAcima(h,i);
		}
		else{
			h->vetor[i] = novo_valor;
			// Se for menor, corrige o heap para baixo
			corrigeAbaixo(h,i);
		}
	}
	else{
		printf("Indice fora do tamanho do Heap\n");
	}
}

int iguais(Heap* h1, Heap* h2){
	// Verifica se os heaps possuem a mesma quantidade de elementos
	if (h1->pos == h2->pos){
		// Percorre os dois heaps para ver se encontra alguma divergencia
		for (int i = 0; i < h1->pos; ++i)
		{
			if (h1->vetor[i] != h2->vetor[i]){
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

float media(Heap* h){
	float soma = 0;
	int c = 0;
	for (int i = 0; i < h->pos; ++i)
	{
		soma += h->vetor[i];
		c++;
	}
	return (float)soma/c;
}

int main(int argc, char const *argv[])
{
	/* code */
	Heap* teste = criaHeap(6);
	Heap* h = criaHeap(6);

	insereHeap(h,1);
	insereHeap(h,3);
	insereHeap(h,5);
	insereHeap(h,7);

	Heap* h2 = criaHeap(6);

	insereHeap(h2,2);
	insereHeap(h2,4);
	insereHeap(h2,6);
	insereHeap(h2,8);

	printf("\nHeap 1:\n");
	imprimeHeap(h);
	printf("\nHeap 2:\n");
	imprimeHeap(h2);

	if (iguais(h,h2)){
		printf("\nOs Heaps sao iguais!\n");	
	}else{
		printf("\nOs Heaps sao diferentes!\n");
	}

	printf("\nQuantidade de filhos do no Indice[%d], Heap 1: %d\n",1,contFilhos(h,1));
	printf("Alterando Valor do no Indice[3] para 10...\n");
	modificaPrioridade(h,3,10.0);

	printf("\nHeap 1:\n");
	imprimeHeap(h);
	printf("\nHeap 2:\n");
	imprimeHeap(h2);

	if (iguais(h,h2)){
		printf("\nOs Heaps sao iguais!\n");	
	}else{
		printf("\nOs Heaps sao diferentes!\n");
	}

	printf("Media Heap 1: %.2f\n", media(h));
	printf("Media Heap 2: %.2f\n", media(h2));

	insereHeap2(h,h2);
	imprimeHeap(h2);
	return 0;
}