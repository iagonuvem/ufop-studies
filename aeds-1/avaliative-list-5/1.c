#include <stdio.h>
#include <string.h>
/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação
*/

void BubbleSort(char *v, int tamanho){
	int aux;

	/* Percorre o vetor da ultima posição para a primeira, a cada passada, diminui-se o contador, visto que o ultimo elemento ja estará ordenado*/
	for (int i = tamanho-1; i > 0 ; --i)
	{
		int troca = 0;
		// Percorre o vetor da primeira posição para a ultima, verificando se há trocas possíveis
		for (int j = 0; j < i; ++j)
		{
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				troca = 1;
			}
		
		}
		// Quando não realizar nenhuma troca, significa que o vetor está ordenado, então para a função
		if(troca == 0){
			return;
		}
	}
}

void SelectionSort(char *vetor,int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  /* Imprime o vetor ordenado */
  for (i = 0; i < max; i++) {
    printf ("%c",vetor[i]);
  }
  printf ("\n");
}

int main(int argc, char const *argv[])
{
	char c[10];


	printf("Digite o nome:\n");
	gets(c);


	BubbleSort(c,10);
	printf("Ordenado com BubbleSort:\n");
	puts(c);

	printf("Ordenado com SelectionSort\n");
	SelectionSort(c,10);



	return 0;
}