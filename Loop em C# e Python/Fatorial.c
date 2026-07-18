#include <stdio.h>

int main() {
    int numero;
    printf("Digite ate onde multiplicao: ");
    scanf("%d", &numero);

    int multiplicacao = 1;
    for (int i = 1; i <= numero; i++) {
        multiplicacao *= i;
    }
    printf("A multiplicacao de 1 ate %d e: %d", numero, multiplicacao);
    return 0;
}