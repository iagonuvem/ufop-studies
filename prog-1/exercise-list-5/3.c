#include <stdio.h>

/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

void verificaLin(int matriz[4][4]){
	int men_li, cont_li = 0, aux_li, aux_col, cont_col = 0, mai_col;

	for (int i = 0; i < 4; ++i)
	{	
		aux_li = 0;

		for (int j = 0; j < 4; ++j)
		{
			aux_li += matriz[i][j]; //Realiza a Soma das Linhas
		}

		if(i == 0){ // Atribui a primeira linha como sendo a menor soma
			men_li = aux_li;
		}
		else if(aux_li < men_li){
			men_li = aux_li;
			cont_li += i; // Para identificar qual a linha que possui a menor soma
		}
	}

	printf("A linha %d possui a menor soma. (soma: %d)\n", cont_li+1, men_li);
}

/* Para verificar a coluna, é nescessario 
fazer o mesmo procedimento das linhas
porém com a matriz transposta*/
void verificaCol(int matriz[4][4]){
	int aux_col, cont_col = 0, mai_col;

	for (int i = 0; i < 4; ++i)
	{	
		aux_col = 0;

		for (int j = 0; j < 4; ++j)
		{
			matriz[i][j] = matriz[j][i]; // TRANSPOSTA = O que é linha , vira coluna e vice-versa 
			aux_col += matriz[i][j]; //Realiza a Soma das Linhas
		}

		if(i == 0){ // Atribui a primeira linha como sendo a menor soma
			mai_col = aux_col;
		}
		else if(aux_col > mai_col){
			mai_col = aux_col;
			cont_col += i; // Para identificar qual a linha que possui a menor soma
		}
	}

	printf("A coluna %d possui a maior soma. (soma: %d)\n", cont_col+1, mai_col);
}

// Preenche E imprime a matriz
void preencheMatriz(int matriz[4][4]){
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			matriz[i][j] = rand() % 10;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int matriz[4][4];

	preencheMatriz(matriz);
	verificaLin(matriz);
	verificaCol(matriz);

	return 0;
}