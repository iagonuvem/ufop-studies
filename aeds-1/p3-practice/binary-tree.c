#include <stdio.h>

/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação
*/
void BubbleSort(int vetor[], int tamanho){
  int aux, i, j;
 
  for(j=tamanho-1; j<=1; j--)
  {
    for(i=0; i>j; i++)
    {
      if(vetor[i] > vetor[i+1])
      {
        aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
      }
    }
  }
}

struct arv
{
	int info;
	struct arv* esq;
	struct arv* dir;
};
typedef struct arv Arv;


int vazia(Arv* a){
	if(a == NULL)
		return 1;
	else
		return 0;
}

Arv* cria_vazia(void){
	return NULL;
}

Arv* cria(int c, Arv* sae, Arv* sad){
	Arv* p = (Arv*)malloc(sizeof(Arv));
	p->info = c;
	p->esq = sae;
	p->dir = sad;

	return p;
}

void imprime(Arv* a){
	if(!vazia(a)){
		printf("%d ", a->info);
		imprime(a->esq);
		imprime(a->dir);
	}
}
int contNo(Arv* a){
	if(vazia(a)){
		return 0;
	}
	else{
		return 1 + contNo(a->esq) + contNo(a->dir);
	}
}

int contNoMen10(Arv* a){
	if(!vazia(a)){
		if(a->info < 10){
			return 1 + contNoMen10(a->esq) + contNoMen10(a->dir);	
		}
		else{
			return 0 + contNoMen10(a->esq) + contNoMen10(a->dir);
		}
	}
	return 0;
}

/**
* Contar nós com info menor que 10 em ARVORE DE BUSCA
* @author Iago Nuvem
*/
int contNoMen10B(Arv* a){
	if(!vazia(a)){
		/* 
		Enquanto a informação for maior que 10, realizara a busca só no
		lado esquerdo da árvore, aumentando a eficiencia do processo.
		*/
		if(a->info > 10){
			return 0 + contNoMen10(a->esq);	
		}
		else{
			return 1 + contNoMen10(a->esq) + contNoMen10(a->dir);
		}
	}
	return 0;
}

void imprimeFolhas(Arv* a){
	if(!vazia(a)){
		if(a->esq == NULL && a->dir == NULL){
			printf("%d ", a->info);
		}
		imprimeFolhas(a->esq);
		imprimeFolhas(a->dir);
		
	}
}

void imprimeNaoFolhas(Arv* a){
	if(!vazia(a)){
		if(a->esq != NULL && a->dir != NULL){
			printf("%d ", a->info);
		}
		imprimeNaoFolhas(a->esq);
		imprimeNaoFolhas(a->dir);
	}
}

Arv* substituiNeg(Arv* a){
	if (a != NULL)
	{
		if(a->info < 0){
			a->info = 0;
		}
		substituiNeg(a->esq);
		substituiNeg(a->dir);
	}
	return a;
}

Arv* minimo(Arv* a){
	if(vazia(a)){
		return NULL;
	}
	else{
		// Verifica se possui algum elemento mais a esquerda (menor)
		if(a->esq != NULL){
			/* Se existir, chama a função recursivamente ate que não exista
			um elemento mais a esquerda (menor)*/
			return minimo(a->esq);
		}
		else{
			return a;
		}
	}
}

void minimoCaminho(Arv* a){
	if(!vazia(a)){
		printf("%d ", a->info);
		if(a->esq != NULL){
			minimoCaminho(a->esq);
		}
	}
}


void imprimeDecrescente(Arv *a,int tamanho,int* v){
	int t = 0;
	tamanho--;
	if(!vazia(a)){
		t = tamanho;
		printf("%d -> ", t);
		imprimeDecrescente(a->esq,t,v);
		v[t] = (int)a->info;

		// imprimeDecrescente(a->dir,t,v);

	}
	else{
		printf("- %d - ", t);
		if(t == 0){
			printf("CHEGOU NO 0\n");
			for (int i = 0; i < tamanho; ++i)
			{
				printf("[%d]", v[7]);
			}
		}	
	}
	

	
}

int degenerada(Arv* a){
	if(a != NULL){
		// Se os DOIS filhos não forem nulos, não é degenerada...
		if(a->esq != NULL && a->dir != NULL){
			return 0;
		}
		//Chegou no nó folha 
		else if(a->esq == NULL && a->dir == NULL){
			return 1;
		}
		else if(a->esq != NULL && a->dir == NULL){
			return degenerada(a->esq);
		}
		else if(a->dir != NULL && a->esq == NULL){
			return degenerada(a->dir);
		}	
	}
	return 0;
}

int menorDez(Arv* a, int n){
	if(!vazia(a)){
		if(a->info < n){
			return 1 + menorDez(a->esq, n) + menorDez(a->dir, n);	
		}
		else{
			return 0 + menorDez(a->esq, n) + menorDez(a->dir, n);
		}
	}
	return 0;
}

int pares(Arv* a){
	if(vazia(a)){
		return 0;
	}
	else{
		if(a->info % 2 == 0){
			return 1 + pares(a->esq) + pares(a->dir);
		}
		else{
			return 0 + pares(a->esq) + pares(a->dir);
		}
	}
}

int umFilho(Arv* a){
	if(vazia(a)){
		return 0;
	}
	else{
		if((a->esq != NULL && a->dir == NULL) || (a->esq == NULL && a->dir != NULL)){
			return 1 + umFilho(a->esq) + umFilho(a->dir);
		}
		else{
			return 0 + umFilho(a->esq) + umFilho(a->dir);
		}
	}
}

Arv* copia(Arv* a){
	if (vazia(a)){
		return NULL;
	}
	else{
		Arv* p = (Arv*)malloc(sizeof(Arv));
		p->info = a->info;
		p->esq = copia(a->esq);
		p->dir = copia(a->dir);
		return p;
	}
}
int main(int argc, char const *argv[])
{
	// SAE do nó principal
	Arv* a1 = cria(-1, cria_vazia(), cria_vazia());
	Arv* a2 = cria(2, cria_vazia(), cria_vazia());
	Arv* a3 = cria(1, a1, a2);
	Arv* a4 = cria(4, cria_vazia(), cria_vazia());
	Arv* a5 = cria(3, a3, a4);
	// SAD do nó principal
	Arv* a6 = cria(9,cria_vazia(),cria_vazia());
	Arv* a7 = cria(12, cria_vazia(), cria_vazia());
	Arv* a8 = cria(11, a6, a7);
	// Nó principal
	Arv* a = cria(5, a5, a8);

	/**
	* Estrutura da árvore
	*		 	     5
    *	          /	    \
	*		     3		 11
	*		  /    \	/  \
	*	    1  		4  9	12
	*	  /   \
	*	-1	   2
	*/

	printf("Arvore Original:\n");
	imprime(a);

	// Questao 1
	printf("\nSubstituindo numeros negativos ...\n");
	substituiNeg(a);
	imprime(a);
	printf("\n");

	// Questao 2
	printf("Numero de Nos: %d\n", contNo(a));

	// Questão 3
	printf("Numero de Nos menores que 10: %d\n", contNoMen10(a));

	// Questao 4
	printf("Nos folha: ");
	imprimeFolhas(a);
	printf("\n");

	// Questao 5
	printf("Nos internos: ");
	imprimeNaoFolhas(a);
	printf("\n");

	// ARVORE DE BUSCA

	// Questão 1
	printf("Numero de Nos menores que 10 (Arvore de busca): %d\n", contNoMen10B(a));
	
	// Questao 2
	printf("Menor no da Arvore de busca: %d\n", minimo(a)->info);

	// Questao 3
	printf("Caminho ate o menor no:");
	minimoCaminho(a);
	printf("\n");

	printf("Numero de elementos pares: %d\n",pares(a));
	printf("Numero de elementos com 1 filho: %d\n", umFilho(a));

	printf("Realizando copia da Arvore....\n");
	Arv* c = copia(a);

	printf("Arvore Original:");
	imprime(a);
	printf("\n");

	printf("Arvore copia:\t");
	imprime(c);
	printf("\n");

	// int* vetor = (int*) malloc(9 * sizeof(int));
	// imprimeDecrescente(a,9,vetor);

	return 0;

}