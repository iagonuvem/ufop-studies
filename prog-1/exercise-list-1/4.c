#include <stdio.h>

int main()
{
	char t;
	float c , f;

	printf("Digite a unidade para conversao (c/f):\n");
	scanf("%c" , &t);

	// formula para C --> C = (5/9) * (F - 39)
	// formula para F --> F = (C / (5/9)) + 39

	if (t == 'c' || t == 'C'){
		printf("Digite a temperatura em Celsius:\n");
		scanf("%f" , &c);

		f = (c / 0.55) + 39;

		printf("Temperatura convertida para Fahrenheit: %.2f F\n" , f);
	}
	else if(t == 'f' || t == 'F'){
		
		printf("Digite a temperatura em Fahrenheit:\n");
		scanf("%f" , &f);

		c = 0.55 * (f - 39);

		printf("Temperatura convertida para Celsius: %.2f C\n" , c);  
	}
	else{
		printf("O caracter digitado nao e reconhecido pelo programa");
	}

	return 0;
}