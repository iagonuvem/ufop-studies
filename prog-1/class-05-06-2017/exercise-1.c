#include <stdio.h>

// Do While Example
int main()
{
	int i = 1;

	/*Its does at least one time*/
	do{
		printf("%d\n", i);
		i++;
	}while(i <= 10);
	/*while the condition is true, loop until became false*/
	return 0;
}