#include <stdio.h>

int main()
{	
	
	float peso, alt , imc;

	printf("Digite o peso:\n");
	scanf("%f" , &peso);

	printf("Digite a altura:\n");
	scanf("%f" , &alt);

	// imc = peso / altura ²
	imc = peso / (alt * alt);

	printf("IMC: %f\n", imc);

	if(imc < 25 && imc > 20){
		printf("PESO IDEAL\n");
	}
	else if(imc < 30 && imc >= 25){
		printf("SOBREPESO\n");
	}
	else if(imc < 40 && imc >= 30){
		printf("OBESIDADE\n");
	}
	else if(imc > 40){
		printf("OBESIDADE MORBIDA\n");
	}else{
		printf("ABAIXO DO PESO\n");
	}

	return 0;
}