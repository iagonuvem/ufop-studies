#include <stdio.h>
/*
* ---------------------------------------------------------------
* CSI030-2017-01 - Programacao de Computadores I
* Nome........: Iago Cardoso Nuvem	
* Matricula...: 17.1.8086
* Curso.......: Sistemas de Informação
* Exercicio...: pagina 1 - exercicio 1 / atividade pratica 1
* ---------------------------------------------------------------
*/

/*
* @author: Iago Nuvem
* @type: int
* @param: valor - int
* @desc: Valida o valor da pontuação
* @return: bool
*/
int validaValor(valor){
	if(10 > valor || valor > 1000){
		return 0;
	}
	else{
		return 1;
	}
}

int main(int argc, char const *argv[])
{
	int p, j1 , j2 , s_j1 = 0 , s_j2 = 0;

	printf("Digite o numero de partidas: \n");
	scanf("%d" , &p);

	for (int i = 0; i < p; i++)
	{
		printf("\n"); // Para melhor visualização
		printf("----- PARTIDA %d -----\n", (i+1));
		printf("Pontuacao jogador 1:\n");
		scanf("%d" , &j1);
		
		/* BUG Prevention , não deixa o usuario digitar 
		valores que não estão de 10 a 1000 */
		while(validaValor(j1) == 0){
			printf("VALOR INVALIDO, digite um numero de 10 a 1000:\n");
			printf("Pontuacao jogador 1:\n");
			scanf("%d" , &j1);	
		}

		if(validaValor(j1)){
			// Soma na variável acumuladora Jogador 1
			s_j1 = s_j1 + j1;
		}

		printf("Pontuacao jogador 2:\n");
		scanf("%d" , &j2);
		
		/* BUG Prevention , não deixa o usuario digitar 
		valores que não estão de 10 a 1000 */
		while(validaValor(j2) == 0){
			printf("VALOR INVALIDO, digite um numero de 10 a 1000:\n");
			printf("Pontuacao jogador 2:\n");
			scanf("%d" , &j2);	
		}
		if(validaValor(j2)){
			// Soma na variável acumuladora Jogador 2
			s_j2 = s_j2 + j2;
		}

	}

	printf("\n"); // para melhor visualização
	if(s_j1 > s_j2){
		printf("O JOGADOR 1 GANHOU!\n");
	}
	else if(s_j2 > s_j1){
		printf("O JOGADOR 2 GANHOU!\n");
	}
	else{
		printf("OS DOIS JOGADORES EMPATARAM!\n");
	}

	return 0;
}
