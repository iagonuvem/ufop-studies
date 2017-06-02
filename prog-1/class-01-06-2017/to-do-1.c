#include <stdio.h>

/*
Exercise:
Read two numbers: x and y, and if x > y show the numbers in descending order from x to y,
else if the x < y , show the numbers in ascending order from x to y.
/*/

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
		i = y; // Starts the counter from the smaller number
		printf("Ordem descrescente:\n");
		while(x >= i){ // Execute While for loop
			desc = (x + 1) - i; // Add 1 to the larger number and then subtract the value of the counter
			printf("%d\n" , desc);
			i++; // Increase the counter
			/*
			When increasing the counter, the value of 'desc' will be less and less,
			Because you will subtract more from this, finding the countdown
			*/
		}
	}
	else if(x < y){
		i = x; // starts the counter from the greatest number
		printf("Ordem Ascendente:\n");
		while(i <= y){
			printf("%d\n" , i);
			i++; // Increase the counter
		}
	}
	else{

	}
	

	return 0;
}