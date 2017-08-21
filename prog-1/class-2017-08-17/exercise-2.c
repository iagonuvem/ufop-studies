#include <stdio.h>
#include <stdlib.h>

int *n = NULL;

void preencheVetor(){
	int *a = NULL;
	int size;

	*n = &size;

	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &size);

	a = (int*) malloc(size * sizeof(int)); 

	if(a==NULL){ // Verificando se o ponteiro NÃO foi criado
		printf("Memoria insuficiente!\n");
	}
	else{
		for (int i = 0; i < size; ++i)
		{
			printf("Digite a posicao %d do vetor\n", i);
			scanf("%d", &a[i]);
		}

	}
}

void imprimeVetor(int *a){
	printf("Vetor digitado: [");
	for (int i = 0; i < *n; ++i)
	{
		printf("%d\t", a[i]);	
	}
	printf("]\n");
}
// Criação de um vetor dinâmico
int main(int argc, char const *argv[])
{
	preencheVetor();
	

	return 0;
}