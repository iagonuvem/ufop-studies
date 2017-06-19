#include <stdio.h>

// Procedures example

// void returns null, it just executes a block of code
void imprimeMaior(int x, int y){
	if(x>y){
		printf("O maior numero e: %d\n", x);
	}
	else{
		printf("O maior numero e: %d\n", y);
	}
}

int main()
{
	int x,y;

	printf("Digite dois valores:\n");
	scanf("%d" , &x);
	scanf("%d" , &y);

	imprimeMaior(x,y); 
		
	return 0;
}