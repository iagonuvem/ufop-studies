#include <stdio.h>

/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

int contaimpar(int n1, int n2){
	int inicio,fim,count = 0;

	if(n1 < n2){ 
		inicio = n1;
		fim = n2;
	}else{
		inicio = n2;
		fim = n1;
	}

	for (int i = inicio; i <= fim; ++i)
	{
		if(i % 2 != 0){
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int n1,n2;

	printf("Digite N1\n");
	scanf("%d" , &n1);

	printf("Digite N2\n");
	scanf("%d" , &n2);

	printf("A quantidade de numeros impares no intervalo dos dois numeros e: %d\n", contaimpar(n1,n2));
	
	return 0;
}