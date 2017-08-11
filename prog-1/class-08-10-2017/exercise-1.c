#include <stdio.h>
/* Criar duas variaveis, uma do tipo Int outra do tipo Float
e utilizar ponteiros para triplicar o valor das variaveis
imprimindo o valor após as alterações
 */
int main(){
    int x=1,y=2;
    int *p = NULL, *q = NULL;

    // Atribui os ponteiros as variáveis
    p = &x;
    q = &y;
    printf("x = %d\n" , *p);
    printf("y = %d\n" , *q);

    // Triplica o valor das variáveis utilizando ponteiro
    *p = (*p) * 3;
    *q = (*q) * 3;


    // Imprime o valor das variáveis utilizando ponteiro
    printf("x * 3= %d\n" , *p);
    printf("y * 3= %d\n" , *q);

    return 0;
}
