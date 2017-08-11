#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m[3][4];

	// Reading data
	for (int i = 0; i < 3; ++i) // Loop for rows
	{
		for (int j = 0; j < 4; ++j) // Loop for cols
		{
			scanf("%d" , &m[i][j]);
		}
	}

	// Printing Data
	for (int i = 0; i < 3; ++i) // Loop for rows
	{
		for (int j = 0; j < 4; ++j) // Loop for cols
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}