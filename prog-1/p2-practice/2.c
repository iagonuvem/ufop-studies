#include <stdio.h>

void quest2(int m[5][5]){
	int maior = m[0][0]; // Assume o maior como pprimeiro elemento da matriz
	int soma_p = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if(m[i][j] > maior){
				maior = m[i][j];
			}

			if(m[i][j] % 2 == 0){
				soma_p += m[i][j];
			}else{
				m[i][j] = 0;
			}
		}
	}

	printf("Maior Elemento: %d\n", maior);
	printf("Soma dos elementos pares: %d\n", soma_p);

	for (int i = 0; i < 5; ++i)
	{
		printf("[");
		for (int j = 0; j < 5; ++j)
		{
			printf("%d \t", m[i][j]);
		}
		printf("]\n");
	}
}

int main()
{
	// Para testar mais facil hueheuh
	int m[5][5] = { 
				{0,0,0,0,0},
				{1,1,1,1,1},
				{2,2,2,2,2},
				{3,3,3,3,3},
				{4,4,4,4,4}
			};

	quest2(m);
	return 0;
}