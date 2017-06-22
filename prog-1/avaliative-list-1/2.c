#include <stdio.h>
#include <math.h>
/*
* ---------------------------------------------------------------
* CSI030-2017-01 - Programacao de Computadores I
* Nome........: Iago Cardoso Nuvem	
* Matricula...: 17.1.8086
* Curso.......: Sistemas de Informação
* Exercicio...: pagina 2 - exercicio 2 / atividade pratica 1
* ---------------------------------------------------------------
*/

int main()
{
	int n = 20; // Define um valor de termos para as operações (FIXO NO EXERCICIO)
	int a1 , q , an , sn;
	float media;

	printf("Digite o primeiro termo da PG:\n");
	scanf("%d" , &a1);

	printf("Digite a razao da PG:\n");
	scanf("%d" , &q);

	
	printf("\nPG = [");
	// N primeiros termos da PG
	for (int i = 1; i <= n; i++)
	{
		// Formula geral PG para N termos
		an = a1 * pow(q,(i-1));
		printf("%d,", an);

		// Formula Soma PG
		sn = a1 * (pow(q , i) - 1/ q - 1);

		if(i == n){ // Para melhor visualização
			printf("...");
		}
	}
	printf("]\n");

	printf("Soma dos %d Primeiros Termos: %d\n" , n, sn);

	// Calculo da média dos N primeiros termos da PG
	media = (float)sn / n;
	printf("Media dos %d primeiros termos da PG: %.2f\n", n , media);

	return 0;
}