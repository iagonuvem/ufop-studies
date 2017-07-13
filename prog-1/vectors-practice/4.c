#include <stdio.h>

int	main()
{
	float vetor[5], maior, menor;
	int pos_mai = 0, pos_men = 0; // Inicia contador da posição do maior e menor

	for (int i = 0; i < 5; ++i)
	{	

		printf("Digite o Valor:\n");
		scanf("%f" , &vetor[i]); // Lê os valores

		if(i == 0){ // Primeiro numero digitado atribui valor as variaveis de maior e menor
			maior = vetor[0];
			menor = vetor[0];
		}
		else{
			//Se o numero digitado for maior, fica este sendo o numero maior até que seja digitado um número ainda maior.
			if(vetor[i] > maior){
				maior = vetor[i];
				pos_mai = i;
			}
			//Se o numero digitado for menor, fica este sendo o numero menor até que seja digitado um número ainda menor.
			else if(vetor[i] < menor){
				menor = vetor[i];
				pos_men = i;
			}
		}
	}

	printf("Maior: %.2f , posicao %d\n", maior , pos_mai );
	printf("Menor: %.2f , posicao %d\n", menor , pos_men );

	return 0;
}