#include <stdio.h>
// Inicialização de ponteiros
int main(){
    //Ao declarar o ponteiro com '= NULL', garante que ele seja inicializado mesmo sem haver ainda um endereço de memória associado
    float *a = NULL, *b = NULL, c=5;
    a = &c;

    if(a != NULL){ //Verifica se o Ponteiro 'a' possui um endereço de memória associado
        b = a; // Note que 'b' não recebe o ENDEREÇO de 'a' (que é passado pelo '&'), e sim o conteúdo.
        printf("Numero: %f", *b);
    }

    return 0;
}
