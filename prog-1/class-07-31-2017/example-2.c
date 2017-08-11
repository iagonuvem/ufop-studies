#include <stdio.h>

/* Recursividade = função se chamando recursivamente
com base em um resultado padrão, no caso do fatorial, o caso padrão é 1 */
int fat(int n){
	if (n == 1){
		return 1;
	}else{
		return (n*fat(n-1));
	}
}
int main()
{
	printf("%d\n", fat(5)); // Retorna 120
	return 0;
}