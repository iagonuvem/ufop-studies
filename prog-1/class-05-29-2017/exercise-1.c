#include <stdio.h>

int main()
{
	/* code */
	int x;

	printf("Digite um numero\n");
	scanf("%d" , &x);

	// Verify if the number is between two values.
	if (x >= 20 && x <= 90){
		/* code */
		printf("O numero esta entre 20 e 90\n");
	}
	else{
		printf("O numero NAO esta entre 20 e 90\n");
	}

	return 0;
}