#include <stdio.h>
#include <stdlib.h>

// Exercise 40 - Page 20
int main()
{
	int r, a , b, i = 1;

	printf("------------------- JOGO DA ADIVINHACAO -------------------\n");

	/* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
        com o valor da função time(NULL). Este por sua vez, é calculado
        como sendo o total  de segundos passados desde 1 de janeiro de 1970
        até a data atual.
        Desta forma, a cada execução o valor da "semente" será diferente.
    */
    srand(time(NULL));

	r =  rand() % 1000; // Gera um número aleatório de 0 a 1000
	printf("NUMERO SORTEADO(0 a 1000)! tente adivinhar:\n");
	// printf("numero = %d\n", r); // Teste

	do{
		printf("\n"); // Quebra de linha para melhor visualização
		printf("------------------- RODADA %d -------------------\n", i);
		printf("Jogador 1:\n");
		scanf("%d" , &a);

		printf("Jogador 2:\n");
		scanf("%d" , &b);

		if(r > a && r > b){
			printf("O numero digitado pelos dois jogadores e MENOR do que o numero sorteado\n");
		}else if(r < a && r < b){
			printf("O numero digitado pelos dois jogadores e MAIOR do que o numero sorteado\n");
		}else if(r < a && r > b){
			printf("O numero digitado pelo Jogador 1 e MAIOR do que o numero sorteado\n");
			printf("O numero digitado pelo Jogador 2 e MENOR do que o numero sorteado\n");
		}else if(r > a && r < b){
			printf("O numero digitado pelo Jogador 1 e MENOR do que o numero sorteado\n");
			printf("O numero digitado pelo Jogador 2 e MAIOR do que o numero sorteado\n");
		}
		i++;
	}while(a != r && b != r);
	
	if(a == r){
		printf("JOGADOR 1 GANHOU!\n");
	}else if( b == r){
		printf("JOGADOR 2 GANHOU!\n");
	}

	// printf("%d\n", a);
	return 0; 
}