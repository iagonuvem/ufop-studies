#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int x;
	float y,media;

	scanf(&x);
	scanf(&y);

	media = (float)x/y;

	printf("%.3f km/l\n", media);

	return 0;
}