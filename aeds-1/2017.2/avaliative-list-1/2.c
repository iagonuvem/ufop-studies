#include <stdio.h>

/**
Nome: Iago Cardoso Nuvem
Matricula: 17.1.8086
Curso: Sistemas de Informação
*/

// a)
int pesquisa(int v[], int p, int n){
	if(n == 0){
		return -1;
	}
	else if(v[n-1] == p){
		return n-1;
	}
	else{
		return pesquisa(v , p , n-1);
	}
}

// b)
int imparMenor(int v[], int n){
	if(n == 0){
		return 0;
	}
	else{
		if((v[n-1] % 2 != 0) && (v[n-1] < 10)){
			return 1 + imparMenor(v, n-1);
		}
		else{
			return 0 + imparMenor(v, n-1);56
		}
	}
}

// c)
int palindromo(char v[], int inicio, int fim){
	if(inicio > fim){
		return 1;
	}
	else {
		if(v[inicio] == v[fim]){
			return palindromo(v , inicio+1, fim-1);
		}
		else{
			return 0;
		}/
	}
}

int main(int argc, char const *argv[])
{
	
	return 0;
}