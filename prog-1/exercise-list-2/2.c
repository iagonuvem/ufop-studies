#include <stdio.h>

// Exercise 33 - Page 19
int main()
{
	int i = 0, pos = 0, neg = 0, aux = 0, x;
	float media, p_neg, p_pos;

	do{
		printf("Digite um numero (digite 0 para parar de ler): \n");
		scanf("%d" , &x);
		aux = aux + x;
		i++;
		if(x >= 0){
			pos++;
		}else{
			neg++;
		}
	}while( x != 0);
	// Para não contar o 0 digitado
	i--; 
	pos--;

	// Calculo da media
	media = (float)aux / i;

	// Calculo das porcentagens
	p_pos = ((float)pos / i) * 100;
	p_neg = ((float)neg / i) * 100;

	printf("Qtd. Positivos: %d\n", pos);
	printf("Qtd. Negativos: %d\n", neg);
	printf("Porcenagem Positivos: %.2f\n", p_pos);
	printf("Porcenagem Negativos: %.2f\n", p_neg);
	printf("Media dos numeros: %.2f\n", media);

	

	return 0; 
}