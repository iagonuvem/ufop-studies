#include <stdio.h>

// Passagem por REFERENCIA em C 
void troca(int *a, int *b){ // Recebe ponteiros
	int temp; // Inicia uma variável LOCAL
	temp = *a; // 'temp' recebe o conteúdo de quem '*a' aponta (temp = 1);
	*a = *b; // '*a' recebe o conteúdo de quem '*b' aponta (x = 2);
	*b = temp; // '*b' recebe o valor da variável local temp (y = 1) ;
}
int main(int argc, char const *argv[])
{
	int x = 1, y = 2;

	troca(&x, &y); // Para passar ponteiros como parâmetro é nescessário utilizar '&'

	return 0;
}