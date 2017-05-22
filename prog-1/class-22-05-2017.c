#include <stdio.h>
// basic C struture
int main()
{
	int x,y,z;

	printf("Digite um numero x: \n"); // show a message to user
	scanf("%d" , &x); // read a variable
	printf("Digite um numero y: \n"); // show a message to user
	scanf("%d" , &y); // read a variable
	printf("Digite um numero z: \n"); // show a message to user
	scanf("%d" , &z); // read a variable

	// Print the readed value
	printf("O numero x digitado e: %d\n", x);

	// add +1 to the value
	x++;// x = x + 1;

	printf("O numero x apos complemento e: %d\n", x);

	y = x++; // y receive the value of 'x' and x was incremented
 
	z = ++x; // z receive the value of 'x' plus 1

	return 0;
}