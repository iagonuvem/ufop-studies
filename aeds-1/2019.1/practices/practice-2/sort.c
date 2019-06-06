#include "sort.h"

// Troca realizada por vários algoritmos de ordenação
void swap(TItem* x, TItem* y, long* att)  
{  
	TItem aux;
	(*att)+=3;
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
				swap(&pA->item[j], &pA->item[j-1], att);
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
				swap(&pA->item[j], &pA->item[j-1], att);
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
        swap(&pA->item[min_idx], &pA->item[i], att);  
    }  
}

void selectSortO(TArray* pA,long* att,long* comp){
	//printf("METODO NAO IMPLEMENTADO\n");
	// Iterate through array elements 
    for (int i = 0; i < pA->n - 1; i++)  
    { 
  
        // Loop invariant : Elements till a[i - 1] 
        // are already sorted. 
  
        // Find minimum element from  
        // arr[i] to arr[n - 1]. 
        (*att)++;
        int min = i; 
        for (int j = i + 1; j < pA->n; j++){
        	(*comp)++; 
            if (pA->item[min].key > pA->item[j].key){
            	(*att)++;
                min = j; 
            } 
        }
  
        // Move minimum element at current i. 
        TItem key = pA->item[min]; 
        while (min > i)  
        { 
        	(*comp)++;
        	(*att)+=2;
            pA->item[min] = pA->item[min - 1]; 
            min--; 
        } 
        (*att)++;
        pA->item[i] = key; 
    } 
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
	int i, j; 
	TItem x;
    for (i = 2; i <= pA->n; i++) {
    	(*att) += 3; 
        x = pA->item[i]; 
        j = i - 1; 
        pA->item[0] = x; // Elemento sentinela

        /*Move os elementos do vetor[0...i-1] QUE SÃO
        MAIORES do que a chave uma posição a frente da 
        atual posição*/
        (*comp) += 1;
        while (pA->item[j].key > x.key) { 
        	(*att) += 2;
            pA->item[j + 1] = pA->item[j]; 
            j = j - 1; 
        } 
        (*att)++;
        pA->item[j + 1].key = x.key; 
    } 
}

void shellSort(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}

int partition(TArray* pA,int start, int end, long* att,long* comp){
	int i = (start-1);
        
    for (int j = start; j <= end-1; j++) {
        (*comp)+=2;
    	/* Elemento atual menor ou igual ao pivô? */
    	if (pA->item[j].key <= pA->item[end].key) {
            i++;
            swap(&pA->item[i], &pA->item[j], att);
    	}
    }
    swap(&pA->item[i+1], &pA->item[end], att);
        
    return (i+1);
}

void quickSort(TArray* pA, int start, int end, long* att,long* comp){
    (*comp)++;
    if (start < end){
    	int pivot = partition(pA, start, end, att, comp);
    
    	quickSort(pA, start, (pivot - 1), att, comp);
    	quickSort(pA, (pivot + 1), end,  att, comp);
    }
}

void heapify(TArray* pA, int n, int i,long* att,long* comp) 
{ 
	(*att)+=3;
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    (*comp)+=2;
    if (l < n && pA->item[l].key > pA->item[largest].key) {
    	(*att)++;
        largest = l; 
    }
        
  
    // If right child is larger than largest so far 
    (*comp)+=2;
    if (r < n && pA->item[r].key > pA->item[largest].key) {
    	(*att)++;
        largest = r;
    }
         
  
    // If largest is not root 
    (*comp)++;
    if (largest != i) 
    { 
        swap(&pA->item[i], &pA->item[largest],att); 
  
        // Recursively heapify the affected sub-tree 
        heapify(pA, n, largest,att,comp); 
    } 
} 
void heapSort(TArray* pA,long* att,long* comp){
	// Build heap (rearrange array) 
    for (int i = (pA->n / 2) - 1; i >= 0; i--){
    	(*comp)++;
        heapify(pA, pA->n, i,att,comp); 
    } 
  
    // One by one extract an element from heap 
    for (int i=(pA->n)-1; i>=0; i--) 
    { 
    	(*comp)++;
        // Move current root to end 
        swap(&pA->item[0], &pA->item[i], att); 
  
        // call max heapify on the reduced heap 
        heapify(pA, i, 0,att,comp); 
    } 
}

void mergeSort(TArray* pA,long* att,long* comp){
	printf("METODO NAO IMPLEMENTADO\n");
}
