#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void printIntArray(int *arr, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void bubbleSort(int arr[], int n) { 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	if(n<0 || n>=pow(10,6)){
		printf("error\n");
	}else{
		int *vet = (long*) malloc(n*sizeof(long));
		for (int i = 0; i < n; ++i){
			long x;
			scanf("%d", &x);
			vet[i] = x;
		}
		bubbleSort(vet,n);
		printIntArray(vet,n);
	}	
	return 0;

}