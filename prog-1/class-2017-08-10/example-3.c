#include <stdio.h>
// Ponteiros e vetores
int main(){
    int a[] = {1,2,3,4,5}; // Cria um vetor
    int b[5]; // Cria um vetor vazio de tamanho 5
    int *p; // Cria um ponteiro

    /* Associa o ponteiro ao vetor, Note que: (p recebe o endereço do vetor a)
    o '&' não é usado pois um vetor tem um funcionamento semelhante a um ponteiro
    logo, não é nescessário utilizar '&'
    */
    p = a;

    // b = a; // NÃO É POSSIVEL ASSOCIAR O VALOR DE UM VETOR AO DE OUTRO!
    return 0;
}
