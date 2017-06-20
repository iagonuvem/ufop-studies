#include <stdio.h>
// Exercise 29 - Page 19
int main()
{
	int y;
	float x;

	printf("Digite o numero para obter a raiz:\n");	
	scanf("%d" , &y);

	x = (float)y/2;
	printf("1 aproximacao: %.2f\n", x);

	for (int i = 0; i < 24; ++i)
	{
		x = ((x * x) + (float)y) / (2 * x);
		printf("%d aproximacao: %f\n", (i + 2) , x);
	}
	return 0;
}