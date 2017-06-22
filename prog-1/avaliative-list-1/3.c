#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <math.h>
/*
* ---------------------------------------------------------------
* CSI030-2017-01 - Programacao de Computadores I
* Nome........: Iago Cardoso Nuvem	
* Matricula...: 17.1.8086
* Curso.......: Sistemas de Informação
* Exercicio...: pagina 2 - exercicio 3 / atividade pratica 1
* ---------------------------------------------------------------
*/

/*
* @author: Iago Nuvem
* @type: int
* @param: x - int , y - int
* @desc: calcula formula de rosenbrock para f(x,y)
* @return: resultado - int
*/
int rosenbrock(x,y){
	int result = pow((1-x) , 2) + (100 * pow((y - pow(x , 2)) , 2 ));
	return result;
}

int main()
{
	/* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
        com o valor da função time(NULL). Este por sua vez, é calculado
        como sendo o total  de segundos passados desde 1 de janeiro de 1970
        até a data atual.
        Desta forma, a cada execução o valor da "semente" será diferente.
    */
    srand(time(NULL));

	int n, r1, r2, soma = 0, maior=0, menor=0;
	float media;

	// Le o numero de bezes que ira repetir
	printf("Digite o numero N de vezes:\n");
	scanf("%d" , &n);

	for (int i = 0; i < n; i++)
	{
		r1 =  rand() % 5 + 11; // Gera um número aleatório de 5 a 15
		r2 =  rand() % 5 + 11; // Gera um número aleatório de 5 a 15
		
		printf("%d repeticao - f(%d,%d) = %d\n", (i+1),r1,r2,rosenbrock(r1,r2)); // Visualização

		soma = soma + rosenbrock(r1,r2); // Acumuladora da soma dos resultados da função

		if(i==0){ //Atribui o valor da primeira repetição as duas variaveis Maior e Menor
			maior =	rosenbrock(r1,r2);
			menor = rosenbrock(r1,r2);
		}

		// Verifica maior e menor
		if(rosenbrock(r1,r2) > maior){
			maior = rosenbrock(r1,r2);
		}
		else if(rosenbrock(r1,r2) < menor){
			menor = rosenbrock(r1,r2);
		}
	}

	media = (float)soma / n;

	printf("Maior: %d\n" , maior);
	printf("Menor: %d\n" , menor);
	printf("Soma: %d\n" , soma);
	printf("Media: %.2f\n", media);

	return 0;
}