#include <stdio.h>

// Criar funções em C que realizem: Multiplicaçõa, Divisão e Multiplicação
int soma(int a , int b){
	int c = a + b;
	return c;	
}
int mult(int a , int b){
	int c = a * b;
	return c;	
}
float divisao(int a , int b){
	float c = (float)a / b;
	return c;	
}

void imprimirInt(int w){
	printf("O resultado e: %d\n", w);
}
void imprimirFloat(float w){
	printf("O resultado e: %f\n", w);
}

int main(){
	
	int x,y,s,m;
	float d;

	printf("Informe os valores\n");
	scanf("%d" , &x);
	scanf("%d" , &y);

	s = soma(x,y);
	m = mult(x,y);
	d = divisao(x,y);

	imprimirInt(s);
	imprimirInt(m);
	imprimirFloat(d);

	return 0;
}