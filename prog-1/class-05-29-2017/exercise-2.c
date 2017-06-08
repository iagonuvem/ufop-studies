#include <stdio.h>

int main()
{
	/* code */
	int x, y , result;
	char c;

	printf("digite um numero x\n");
	scanf("%d", &x);
	printf("digite um numero y\n");
	scanf("%d", &y);

	printf("digite o caracter\n");
	scanf(" %c" , &c);

	switch (c) {
		case '+':
			result = x + y;
			printf("O resultado da operacao e: %d", result);
		break;
		case '-':
			result = x - y;
			printf("O resultado da operacao e: %d", result);
		break;
		case '*':
			result = x * y;
			printf("O resultado da operacao e: %d", result);
			break;
		case '/': // A divisão de dois numeros do tipo INT sempre resutará em resultado do tipo INT
			result = x / y;
			printf("O resultado INTEIRO da operacao e: %d", result);
			break;
		default:
			printf("O caracter digitado nao e reconhecido pelo programa");
	}
		
	return 0;
}