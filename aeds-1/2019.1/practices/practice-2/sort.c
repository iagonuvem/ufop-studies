#include "sort.h"

// Troca realizada por vários algoritmos de ordenação
void swap(TItem* x, TItem* y)  
{  
	TItem aux;
    aux = *x;
    *x = *y;
    *y = aux;
}  

void bubbleSort(TArray* pA, long* att, long* comp){
	TItem aux;
	
	for(int i = 0; i < pA->n-1; i++){
		for(int j = 0; j < pA->n-i; j++){
			(*comp)++;
			if(pA->item[j].key < pA->item[j-1].key){
				(*att)+=3;
				swap(&pA->item[j], &pA->item[j-1]);
				/*
				aux           = pA->item[j];
				pA->item[j]   = pA->item[j-1];
				pA->item[j-1] = aux;
				*/
			}
		}
	}
}

//bubbleSort Otimizado
void bubbleSortO(TArray* pA, long* att, long* comp){
	TItem aux;
	int swapped; 
	for(int i = 0; i < pA->n-1; i++){
		swapped = 0;
		for(int j = 0; j < pA->n-i; j++){
			(*comp)++;
			if(pA->item[j].key < pA->item[j-1].key){
				(*att)+=3;
				swap(&pA->item[j], &pA->item[j-1]);
				swapped = 1;
			}
		}
		// Caso percorra o vetor uma vez inteira e não realize trocas, para a execução
		if(swapped == 0){
			break;
		}
	}
}

void selectSort(TArray* pA,long* att,long*comp){
	int i, j, min_idx;  
  
    for (i = 0; i < pA->n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < pA->n; j++) {
        	(*comp)++; 
        	if (pA->item[j].key < pA->item[min_idx].key){
        		min_idx = j;
        	}    	
        }
        (*att)+=3;
        swap(&pA->item[min_idx], &pA->item[i]);  
    }  
}

void selectSortO(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void insertionSort(TArray* pA,long* att,long* comp){
	int i, key, j; 
    for (i = 1; i < pA->n; i++) {
    	(*att) += 2; 
        key = pA->item[i].key; 
        j = i - 1; 

        /*Move os elementos do vetor[0...i-1] QUE SÃO
        MAIORES do que a chave uma posição a frente da 
        atual posição*/
        (*comp) += 2;
        while (j >= 0 && pA->item[j].key > key) { 
        	(*att) += 2;
            pA->item[j + 1] = pA->item[j]; 
            j = j - 1; 
        } 
        (*att)++;
        pA->item[j + 1].key = key; 
    } 
}

void insertionSortO(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void shellSort(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void quickSort(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void heapSort(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void mergeSort(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}
