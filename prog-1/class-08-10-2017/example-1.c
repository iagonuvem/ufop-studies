#include <stdio.h>

// PONTEIROS
int main(){
    int count,b,c;
    int *m; // o asterisco antes da vari�vel indica que � um ponteiro

    b = 10;
    count = 5;
    m = &count; // Associa o ponteiro ao endere�o de mem�ria da vari�vel 'count'

    *m = *m + 1; // Adiciona 1 ao valor da vari�vel 'count'

    printf("%d" , *m); // Imprime 6, pois o ponteiro 'm' est� apontando para a vari�vel 'count'

    c = b * (*m) // � nescess�rio NAS OPERA��ES colocar o ponteiro entre parenteses, sempre que este vier depois do operador, seja +,-,/ ou *;

    return 0;
}
