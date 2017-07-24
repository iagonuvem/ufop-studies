#include <stdio.h>
/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

void le_precos(int precos[], int quantidade, char opcao[]) {
	for (int i = 0; i < quantidade; ++i)
	{	
		printf("Preco Produto %d\n", i+1);
		scanf("%d" , &precos[i]);
		printf("Tipo:\n");
		gets();
	}

}

void calculaLucro(int precos[], int quantidade, char opcao[]){
	int c1=0, c2=0, c3=0;
	float lucro;

	for (int i = 0; i < quantidade; ++i)
	{	
		if(i%2 != 0){
			lucro = (float)(precos[i] - precos[i+1]) / 100;
			if(lucro < 0.1){
				c1++;
			}
			else if(lucro > 0.1 && lucro < 0.2){
				c2++;
			}
			else if(lucro > 0.2){
				c3++;
			}
		}
	}
	printf("c1: %d\n", c1);
	printf("c2: %d\n", c2);
	printf("c3: %d\n", c3);
}

int main()
{
	int quantidade = 10;
	int precos[10];
	char opcao[20];

	le_precos(precos,quantidade,opcao);
	calculaLucro(precos,quantidade,opcao);
	return 0;
}