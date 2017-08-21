#include <stdio.h>

/* 
Programe dois procedimentos de assinatura :

'void swap(int *a, int *b)'
que troque os conteudos entre os ponteiros a e b

E

'void swap2x(int *a, int *b)'
que troque os conteudos entre os ponteiros a e b, duplicando os conteúdos
durante a troca.
*/

void swap(int *a, int *b){ 
	int temp; 
	temp = *a; 
	*a = *b; 
	*b = temp; 
}
void swap2x(int *a, int *b){ 
	int temp; 
	temp = *a; 
	*a = 2 * (*b); 
	*b = 2 * temp; 
}
int main(int argc, char const *argv[])
{
	int x = 1, y = 2;

	swap(&x, &y); // Para passar ponteiros como parâmetro é nescessário utilizar '&'
	printf("Swap:\nX = %d\nY = %d\n", x , y);

	swap2x(&x, &y); // Para passar ponteiros como parâmetro é nescessário utilizar '&'
	printf("Swap 2x:\nX = %d\nY = %d\n", x , y);

	return 0;
}