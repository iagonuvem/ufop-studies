#include <stdio.h>
/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/
int multiplica_intervalo (int n1 , int n2){
	int inicio, fim, mult = 1;
	
	if(n1>n2){
		inicio = n2;
		fim = n1;
	}
	else if(n2>n1){
		inicio = n1;
		fim = n2;
	}
	else{
		mult = n1;
	}

	for (int i = inicio; i <= fim; i++)
	{
		// printf("%d * %d\n", mult , i); // TESTES

		if(i != 0){ // Para desconsiderar o 0
			mult = mult * i;
		}
		
	}

	return mult;

}

int main()
{
	int x, y;

	printf("Digite o primeiro numero:\n");
	scanf("%d" , &x);

	printf("Digite o segundo numero:\n");
	scanf("%d" , &y);

	printf("Resultado: %d\n", multiplica_intervalo(x,y));
	return 0;
}