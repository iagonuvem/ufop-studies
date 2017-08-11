#include <stdio.h>

/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

int verificaLin(int matriz[3][3] , int soma){
	int cont_li = 0, aux_li, result = 0;

	for (int i = 0; i < 3; ++i)
	{	
		aux_li = 0;

		for (int j = 0; j < 3; ++j)
		{
			aux_li += matriz[i][j]; //Realiza a Soma das Linhas
		}

		if(i > 0 && aux_li == soma){ // Se a linha não for a primeira e soma for igual a da linha anterior
			result = 1; // resultado será POSITIVO, ou true (em booleano = 1)
		}else{
			result = 0; // resultado será NEGATIVO, ou false (em booleano = 0)
		}
	}

	return result;
}


/* Para verificar a coluna, é nescessario 
fazer o mesmo procedimento das linhas
porém com a matriz transposta*/
int verificaCol(int matriz[3][3] , int soma){
	int aux_col, cont_col = 0, result = 0, m_transp[3][3];

	for (int i = 0; i < 3; ++i)
	{	
		aux_col = 0;

		for (int j = 0; j < 3; ++j)
		{
			m_transp[i][j] = matriz[j][i]; // TRANSPOSTA = O que é linha , vira coluna e vice-versa 
			aux_col += m_transp[i][j]; //Realiza a Soma das Linhas
		}

		if(i > 0 && aux_col == soma){ // Se a linha não for a primeira e soma for igual a da linha anterior
			result = 1; // resultado será POSITIVO, ou true (em booleano = 1)
		}else{
			result = 0; // resultado será NEGATIVO, ou false (em booleano = 0)
		}
	}
	return result;
}

int verificaDiagonais(int matriz[3][3] , int soma){
	int aux_dp = 0, aux_ds = 0, result = 0;

	for (int i = 0; i < 3; ++i)
	{	
		aux_dp += matriz[i][i]; // Soma da diagonal principal		
		aux_ds += matriz[i][2-i]; // Soma da diagonal secundaria = matriz[pos_lin][num_col - pos_lin] (lembrando que sempre começa de 0 e não de 1)
	}

	if(aux_dp == soma && aux_ds == soma){ // Se as somas das diagonais forem iguais..
		result = 1; // resultado será POSITIVO, ou true (em booleano = 1)
	}else{
		result = 0; // resultado será NEGATIVO, ou false (em booleano = 0)
	}

	return result;
}

int main(int argc, char const *argv[])
{
	int matriz[3][3] , soma = 0;

	// Lendo a matriz
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Digite um valor:\n");
			scanf("%d" , &matriz[i][j]);
			if(i == 0){
				soma += matriz[i][j]; // Calculando a soma da primeira linha para ter ela de base 
			}
		}
	}

	// printf("soma : %d\n", soma);
	if(verificaLin(matriz,soma) == 1 && verificaCol(matriz,soma) == 1 && verificaDiagonais(matriz,soma) == 1){
		printf("A matriz e um quadrado magico\n");
	}else{
		printf("A matriz NAO e um quadrado magico\n");
	}

	return 0;
}