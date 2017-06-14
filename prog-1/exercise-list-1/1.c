#include <stdio.h>

/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/
int main()
{
	int alt, bas, per, area;

	printf("Digite a altura do retangulo:\n");
	scanf("%d" , &alt);

	printf("Digite a base do retangulo:\n");
	scanf("%d" , &bas);

	// Perímetro = soma dos lados , ou 2 vezes a base mais 2 vezes a altura
	per = (2 * alt) + (2 * bas);

	// Área = base X Altura
	area = bas * alt;


	printf("Perimetro: %d\n" , per);
	printf("Area: %d\n" , area);

	return 0;
}