#include <stdio.h>

float rec(float x, float n){
	if(n == 1.00){
		return x;
	}
	else if(n == 0){
		return 1.00;
	}	
	else{
		return ((pow(x,n) + n)/(x + n)) + rec(x,n-1);
	}
}

int main(int argc, char const *argv[])
{
	printf("%.2f\n", rec(2.00,3.00));
	return 0;
}