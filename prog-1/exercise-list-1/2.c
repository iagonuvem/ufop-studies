#include <stdio.h>

/*
Aluno: Iago Cardoso Nuvem
Matrícula: 17.1.8086
Curso: Sistemas de Informação
*/

int main()
{
	int r, d;
	float a, p, pi;

	printf("Digite o valor do raio da circunferencia:\n");	
	scanf("%d" , &r);

	//Para pi = 3.14;
	pi = 3.14;

	// Diametro
	d = 2 * r;
	// Área
	a = pi * (r*r);
	// Perimetro
	p = 2*pi*r;

	printf("Diametro da circunferência: %d\n" , d);
	printf("Perimetro da circunferência: %f\n" , p);
	printf("Area da circunferência: %f\n" , a);

	return 0;
}