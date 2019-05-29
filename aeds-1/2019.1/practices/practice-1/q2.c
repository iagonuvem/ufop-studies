#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int x = 0;
	scanf(&x);

	if(x < 10000){
		printf((x*x)"\n");
	}
	else{
		printf("0\n");
	}
	return 0;
}