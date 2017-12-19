#include <stdio.h>	

struct no{
	int info;
	struct no* prox;
};
typedef struct no No;

struct pilha{
	struct no* topo;
};
typedef struct pilha Pilha;

void liberar(Pilha* p) {
    No* q = p->topo;
    while(q != NULL) {
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

/**
* Adiciona um carro na pilha e exibe uma mensagem
* @param <p> <Pilha de carros>
* @param <placa> <Placa do carro a ser estacionado (info do nó da pilha)>
* @return <novo topo da pilha>
*/
void pushCar(Pilha* p, int placa){
	No* novo = (No*) malloc(sizeof(No));
	novo->info = placa;
	novo->prox = p->topo;
	p->topo = novo;
	printf("O carro %d foi estacionado!\n" , placa);
}

void push(Pilha* p, int placa){
	No* novo = (No*) malloc(sizeof(No));
	novo->info = placa;
	novo->prox = p->topo;
	p->topo = novo;
}

/**
* Remove o topo da pilha 
* @param <p> <Pilha de carros>
* @return <topo retirado>
*/
int pop(Pilha* p){
	int v;
    No* e;
    if(vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1); /* aborta programa */
    }
    v = p->topo->info;
    e = p->topo->prox;
    free(p->topo);
    /* atualiza o topo da pilha */
    p->topo = e;
    return v;
}

void popn(Pilha* p, int n){	
	for (int i = 0; i < n; ++i)
	{
		if(!vazia(p)){ // Se a pilha não estiver vazia
			pop(p); // Remove o topo
		}
		else{
			break;
		}
	}
}

/**
* Remove o carro com a placa especificada
* @param <p> <pilha da qual vai ser retirada o carro>
* @param <placa> <placa do veiculo que será retirada>
* @return <p> <nova pilha, apos retirada>
*/
Pilha* popCar(Pilha* p, int placa){
	Pilha* aux = (Pilha*) malloc(sizeof(Pilha));
	int cont = 0;
	int ctrl = 1;
	while(!vazia(p)){
		No* e = p->topo->prox;
		int a = pop(p);

		/**
		* 
		*/
		if(a != placa){ 
			pushCar(aux, a);
		}
		else{
			/**
			* Se achar alguma ocorrencia, seta o controlador do contador
			* para 0, para não continuar a contar, e não coloca o elemento
			* encontrado na pilha auxiliar "pulando" ele
			*/
			ctrl = 0; 
		}

		if(ctrl != 0){
			cont++;
		}
	}

	if(ctrl == 1){ // Se não foi encontrado nenhum elemento
		printf("O carro %d nao esta presente na pilha\n", placa);
	}
	else{
		printf("Foram retirados %d carro(s) antes de retirar o carro %d\n", cont, placa);
	}

	// Volta os carros em ordem para a pilha principal
	while(!vazia(aux)){ 
		pushCar(p, pop(aux));
	}
	
	return p;
}



Pilha* criar(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

void imprime(Pilha* p){
	Pilha* aux = criar();
	while(!vazia(p)){ // 'Percorre' a pilha enquanto ela tiver elementos
		int a = pop(p); // Remove o topo da pilha e armazena o topo em 'v'
		printf("%d\n", a); // imprime 
		push(aux,a); // coloca o topo da pilha 'p' na pilha auxiliar
	}

	while(!vazia(aux)){
		push(p, pop(aux)); 
	}

	free(aux);
}

int vazia(Pilha* p){
	return (p->topo == NULL);
}

int main(int argc, char const *argv[])
{
	Pilha* teste = criar();

	pushCar(teste,1);
	pushCar(teste,2);
	pushCar(teste,3);
	pushCar(teste,4);

	imprime(teste);

	Pilha* nova = popCar(teste,2);

	imprime(nova);

	return 0;
}