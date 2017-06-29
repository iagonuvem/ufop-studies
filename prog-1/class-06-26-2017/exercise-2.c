#include <stdio.h>

// assinaturas
int contaimpar(int n1, int n2);

int main()
{
	int x , y;

	printf("Digite um intervalo de numeros:\n");
	scanf("%d" , &x);
	scanf("%d" , &y);

	printf("Quantidade de numeros impares no intervalo: %d\n", contaimpar(x,y));
	return 0;
}

// Parte lógica da função definida na assinatura
int contaimpar(int n1, int n2){
	int inicio,fim,count = 0;
	if(n1 > n2){
		inicio = n2;
		fim = n1;
	}
	else if(n1 < n2){
		inicio = n1;
		fim = n2;
	}
	
	for (int i = inicio; i <= fim; i++)
	{
		if(i % 2 != 0){
			count++;
		}
	}
	return count;
}