#include "sort.h"

void bubbleSort(TArray* pA, long* att, long* comp){
	TItem aux;
	
	for(int i = 0; i < pA->n-1; i++){
		for(int j = 0; j < pA->n-i; j++){
			(*comp)++;
			if(pA->item[j].key < pA->item[j-1].key){
				(*att)+=3;
				aux           = pA->item[j];
				pA->item[j]   = pA->item[j-1];
				pA->item[j-1] = aux;
			}
		}
	}
}

//bubbleSort Otimizado
void bubbleSortO(TArray* pA, long* att, long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void selectSort(TArray* pA,long* att,long*comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void selectSortO(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

void insertionSort(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
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
