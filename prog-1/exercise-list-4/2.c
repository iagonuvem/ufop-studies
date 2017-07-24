#include <stdio.h>
/*
Aluno: Lucas Guilherme Ferreira
Matrícula: 17.1.8215
Curso: Sistemas de Informação
*/

void lerSalarios(int matricula[], float salario[], int n){
	for (int i = 0; i < n; ++i)
	{
		printf("Matricula funcionario %d:\n" , i+1);
		scanf("%d" , &matricula[i]);

		printf("Salario funcionario %d:\n" , i+1);
		scanf("%d" , &salario[i]);  
	}
}

void reajustaSalarios(int matricula[], float salario[], int porc_reajuste[], float sal_reajustado[], int n){
	for (int i = 0; i < n; ++i)
	{
		if(matricula[i] % 2 == 0){
			porc_reajuste[i] = 15;
		}
		else{ 
			porc_reajuste[i] = 20;
		}

		sal_reajustado[i] = salario[i] + (salario[i] * ((float)porc_reajuste[i]/100));
	}
}

void imprimir(int matricula[], float salario[], int porc_reajuste[], float sal_reajustado[], int n){
	for (int i = 0; i < n; ++i)
	{
		printf("Funcionario\n", i+1);
		printf(" Matricula: %d\n", matricula[i]);
		printf(" Salario Base: %.2f\n", salario[i]);
		printf(" Percentual de porc_reajuste: %d\n", porc_reajuste[i]);
		printf(" Salario Corrigido: %.2f\n", sal_reajustado[i]);
	}
}

int main(){
	int matricula[10],salario[10],porc_reajuste[10],sal_reajustado[10];

	lerSalarios(matricula, salario, 10);
	reajustaSalarios(matricula,salario,porc_reajuste,sal_reajustado,10);
	imprimir(matricula,salario,porc_reajuste,sal_reajustado,10);

	return 0;
}