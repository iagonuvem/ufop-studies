#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float x1,x2,y1,y2,d;

	scanf(&x1);
	scanf(&x2);
	scanf(&y1);
	scanf(&y2);

	d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

	printf("%.4f\n", d);
	return 0;
}