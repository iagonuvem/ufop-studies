#include <stdio.h>
// Inicializa��o de ponteiros
int main(){
    //Ao declarar o ponteiro com '= NULL', garante que ele seja inicializado mesmo sem haver ainda um endere�o de mem�ria associado
    float *a = NULL, *b = NULL, c=5;
    a = &c;

    if(a != NULL){ //Verifica se o Ponteiro 'a' possui um endere�o de mem�ria associado
        b = a; // Note que 'b' n�o recebe o ENDERE�O de 'a' (que � passado pelo '&'), e sim o conte�do.
        printf("Numero: %f", *b);
    }

    return 0;
}
