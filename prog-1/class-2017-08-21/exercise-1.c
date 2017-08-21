#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Crie uma estrutura ponto contendo x e y, coordenadas de um ponto
preencha os campos e imprima a distancia entre os pontos
*/
typedef struct regPonto{
 int x;
 int y;
} Ponto;

float calcDistancia(Ponto p1, Ponto p2){
	return(sqrt(pow(p2.x - p1.x , 2) + pow(p2.y - p1.y, 2)));
}
int main(int argc, char const *argv[])
{
	Ponto p1,p2;

	printf("Digite X no ponto 1\n");
	scanf("%d" , &p1.x);
	printf("Digite Y no ponto 1\n");
	scanf("%d" , &p1.y);

	printf("Digite X no ponto 2\n");
	scanf("%d" , &p2.x);
	printf("Digite Y no ponto 2\n");
	scanf("%d" , &p2.y);

	printf("A distancia entre os dois pontos e: %.2f\n" , calcDistancia(p1, p2));
	return 0;
}