#include <stdio.h>

int main()
{
	int x;
	float y; 

	y = 3.14;
	x = y;

	printf("Y = %f\n", y); // display 3.14
	printf("X = %d\n", x); // display 3

	// The type float cannot be converted to int without losing data.
	// This could generate problems in a complex application

	return 0;
}