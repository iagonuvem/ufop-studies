#include <stdio.h>
#include <stdlib.h>

void swap(int *px, int *py){
	int aux;
	aux = px;
	px = py;
	px = aux;
}

int main(int argc, char const *argv[])
{
	int x,y;
	int *px,*py;

	scanf(&x);
	scanf(&y);

	px = &x; // PonteiroX recebe o endereço de memória de x
	py = &y; // PonteiroY recebe o endereço de memoria de y

	swap(px,py);

	printf("%d\n", x);
	printf("%d\n", y);
	return 0;
}