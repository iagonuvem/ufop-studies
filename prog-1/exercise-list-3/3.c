#include <stdio.h>
/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

/*
primavera: 29/9
verao: 21/12
outono: 21/3
inverno: 21/6
*/

// Exercicio 8 - Pag 25
void estacao(int dia, int mes){
	if((dia >= 29 && mes == 9) || (mes >= 9 && mes < 12) || (dia < 21 && mes == 12)){
		printf("Primavera\n");
	}
	if((dia >= 21 && mes == 12) || (mes >= 1 && mes < 3) || (dia < 21 && mes == 3)){
		printf("Verão\n");
	}
	if((dia >= 21 && mes == 3) || (mes >= 3 && mes < 6) || (dia < 21 && mes == 6)){
		printf("Outono\n");
	}
	if((dia >= 21 && mes == 6) || (mes >= 6 && mes < 9) || (dia < 29 && mes == 9)){
		printf("Inverno\n");
	}
}

/*
@author Iago Nuvem
@desc Valida os valores digitados para dia e mes
@return bool
*/
int validaData(int dia, int mes){
	int r;
	if(dia > 31 || mes > 12){
		r = 0;
	}else{
		r = 1;
	}

	return r;
}

int main()
{
	int dia, mes;

	do{
		printf("Digite o dia:\n");
		scanf("%d" , &dia);

		printf("Digite o mes:\n");
		scanf("%d" , &mes);

		if(validaData(dia,mes) != 1){
			printf("Data invalida! Digite novamente\n\n");
		}
	}while(validaData(dia,mes) != 1); // Verificação de datas
	

	estacao(dia,mes);
	

	return 0;
}