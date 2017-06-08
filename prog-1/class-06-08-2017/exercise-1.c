#include <stdio.h>

/*Write a program that reads a number and calculate the fatorial of it*/
int main() {

	int x, fat, temp;

	printf("Digite um numero\n");
	scanf("%d" , &x);

	for (int i = 1; i < x; i++)
	{
		fat = x * (x-i);

		if (i == 1) {
			temp = fat;
		}
		else {
			temp = temp * (x-i);
		}
		
	}

	printf("%d\n" , temp);

	return 0;
}