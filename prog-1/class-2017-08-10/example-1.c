#include <stdio.h>

// PONTEIROS
int main(){
    int count,b,c;
    int *m; // o asterisco antes da variável indica que é um ponteiro

    b = 10;
    count = 5;
    m = &count; // Associa o ponteiro ao endereço de memória da variável 'count'

    *m = *m + 1; // Adiciona 1 ao valor da variável 'count'

    printf("%d" , *m); // Imprime 6, pois o ponteiro 'm' está apontando para a variável 'count'

    c = b * (*m) // É nescessário NAS OPERAÇÕES colocar o ponteiro entre parenteses, sempre que este vier depois do operador, seja +,-,/ ou *;

    return 0;
}
