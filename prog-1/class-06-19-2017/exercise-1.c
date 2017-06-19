#include <stdio.h>

//Functions example

int soma(int a , int b){
	int c = a + b;
	return c;	

	// OR:
	// return (a+b);
}

int main(){
	
	int x,y,s;

	printf("Informe os valores\n");
	scanf("%d" , &x);
	scanf("%d" , &y);

	s = soma(x,y);

	printf("A soma dos valores e: %d\n" , s);

	return 0;
}