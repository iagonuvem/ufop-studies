#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void printIntArray(int *arr, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

void insertionSort(int *arr, int n) { 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 

        /*Move os elementos do vetor[0...i-1] QUE SÃO
        MAIORES do que a chave uma posição a frente da 
        atual posição*/
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	if(n<0 || n>=pow(10,6)){
		printf("error\n");
	}else{
		int *vet = (int*) malloc(n*sizeof(int));
		for (int i = 0; i < n; ++i){
			int x;
			scanf("%d", &x);
			vet[i] = x;
		}
		insertionSort(vet,n);
		printIntArray(vet,n);
	}	
	return 0;

}