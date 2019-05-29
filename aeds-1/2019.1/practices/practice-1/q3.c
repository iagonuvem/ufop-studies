#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float pi = 3.14159;
	float r, area;
	scanf(&r);

	area = pi * (r*r);

	printf("A=%.4f\n",area);
	
	return 0;
}