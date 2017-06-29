#include <stdio.h>

int fatorial(int n){
	int f;

	for (int i = 1; i < n; i++)
	{		
		if(i == 1){ // First Loop
			f = n * (n-i);
		}
		else{
			f = f * (n-i);
		}		
	}

	return f;
}

int main(){

	int n;

	printf("Digite o numero para calcular o fatorial:\n");
	scanf("%d" , &n);

	printf("Resultado: %d\n" , fatorial(n));
	
	return 0;
}