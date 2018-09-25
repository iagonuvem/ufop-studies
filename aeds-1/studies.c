#include <stdio.h>

void imprime_crescente(int n){
	if(n>0){
		imprime_crescente(n-1);
	}
	printf("%d ",n);
}

int main(int argc, char const *argv[])
{
	imprime_crescente(3);
	return 0;
}