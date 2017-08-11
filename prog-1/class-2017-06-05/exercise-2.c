#include <stdio.h>

// FOR Example
int main()
{
	int x;

	printf("Digite um numero\n"); // Read a number
	scanf("%d" , &x);

	if( x > 1){ // Ascending count
		
		for (int i = 1; i < x; i++)
		{
			printf("%d\n" , i);
		}
	}
	else if( x < 1){ // Descending count

		for (int i = 1; i < x; i++)
		{
			printf("%d\n" , i);
		}
	}
	else{
		printf("Os numeros sao iguais\n");
	}
	
	return 0;
}