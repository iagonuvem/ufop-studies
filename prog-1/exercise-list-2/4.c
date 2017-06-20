#include <stdio.h>

int main() {

    int col, base, lin, col_branco;

    printf("Qual o tamanho que a base vai admitir? :\n");
    scanf("%d", &base);

    for (lin = 1; lin <= base; ++lin) {
        for (col_branco = 1 ; col_branco <= base - lin; ++col_branco) {
            printf("   ");
        }
        for(col = 1; col <= lin; ++col) {
            printf(" * ");
        }
        printf("\n");
    }


    return 0;
}