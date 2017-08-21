#include <stdio.h>

/*
Programe um procedimento que pesquise e imprima o Maior e Menor elemento
de um vetor, utilizando ponteiros.
*/
void procMinMax(int nums[10]){
	int *min, *max;

	/* 
	Semelhante a 'min = nums[0]',
	porem como 'min' é um ponteiro, pode-se associar diretamente
	visto que um vetor também é um tipo de ponteiro(também aloca espaços de memória)
	*/
	min = nums;
	max = nums;

	for (int i = 1; i < 10; ++i)
	{
		if(*(nums+i) < *min){
			min = nums+i;
		}
		if(*(nums+i) > *max){
			max = nums+i;
		}
	}

	printf("Min=%d\nMax=%d", min, max);
}

int main(int argc, char const *argv[])
{
	int vetor[] = {1,2,3,4,5,6,7,8,9,10};

	procMinMax(vetor);

	return 0;
}