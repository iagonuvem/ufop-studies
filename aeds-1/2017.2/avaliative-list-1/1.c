#include <stdio.h>

/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação
*/

int main(int argc, char const *argv[])
{
	/**
	-------------------------
	Letra A)
	-------------------------
	*/
	int i, j, k, x; // 0
	for(i = 0; i < n; i++){ // 2(n+1) = 2n + 2
		for(j = 0; j < n; j++){ // n * 2(n+1) = 2n² + 2n
			x = 0; // n * n = n²
			for(k = 0; k < n; k++) // n² * 2(n+1) = 2n³ + 2n²
				x = 1; // n * n * n = n³
		}
	}

	/**
	Soma Final
	(2n + 2) + (2n² + 2n) + (n²) + (2n³ + 2n²) + (n³)
	= 3n³ + 5n² + 4n + 2
	*/
	
	/**
	-------------------------
	Letra B)
	-------------------------
	*/
	int i, j, s = 0; // 1
	for(i = 1; i < n-1; i++){ // 2(n-1) = 2n - 2
		for(j = 1; j < 2*n; j++){ // n * 2(2n) = 4n²
			s = 1; // n * n = n²
		}
	}
	return 0;
	/**
	(1) + (2n - 2) + (4n²) + (n²)
	5n² + 2n - 1
	*/

	/**
	-------------------------
	Letra C)
	-------------------------
	*/
	int i, j, k, a; // 0 
	for(i = 0; i < n; i++){ // 2(n+1) = 2n + 2
		j = 1; // n
		while(j < n){ // n * n = n²
			for(k = 1; k < n; k++){ // n * (n-1) * 2n = 2n³ - 2n²
				a = k; // n * (n-1)*(n-1) = n³ - 2n² + n
			}
			j++; // n*(n-1) = n² - n
		}
	}

	/**
	(2n + 2) + (n) + (n²) + (2n³ - 2n²) + (n³ - 2n² + n) + (n² - n)
	3n³ - 2n² + 3n + 2
	*/
}