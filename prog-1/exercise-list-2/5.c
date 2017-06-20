#include <stdio.h>

int main()
{
	int den = 1, sinal = 1;
	float aux = 1, pi;
	
	for(int i = 0; i < 1000000; i++){ // quanto mais repetições, mais aproximado do valor de pi
		sinal = sinal * -1; // alternar sinal
		den = den + 2; // denominador crescente de 2 em 2
		
		aux = aux + (sinal * ((float)1/den));
	}

	// Formula de Leibniz = 4 * (soma dos fatores) = pi
	pi = 4 * aux;

	printf("%f\n", pi);
	return 0;
}