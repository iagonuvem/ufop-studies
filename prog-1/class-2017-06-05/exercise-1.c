#include <stdio.h>
/* 
Exercise:
Read two numbers: x and y, and if x > y show the numbers in descending order from x to y,
else if the x < y , show the numbers in ascending order from x to y. USING DO WHILE
*/
int main()
{
	int x, y, i ,desc;

	// Read the numbers
	printf("Digite um numero x\n");
	scanf("%d" , &x);

	printf("Digite um numero y\n");
	scanf("%d" , &y);

	// Checks which number is larger
	if(x > y){
		i = x;
		printf("Ordem descrescente:\n");
		do{
			printf("%d\n" , i);
			i--; // Increase the counter
			/*
			When increasing the counter, the value of 'desc' will be less and less,
			Because you will subtract more from this, finding the countdown
			*/
		}
		while(i >= y);
	}
	else if(x < y){
		i = x; // starts the counter from the greatest number
		printf("Ordem Ascendente:\n");
		do{
			printf("%d\n" , i);
			i++; // Increase the counter
		}
		while(i <= y);
	}
	else{
		printf("Os numeros sao iguais\n");
	}
	
	return 0;
}