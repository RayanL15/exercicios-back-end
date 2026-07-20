#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero para saber o fatorial: ");
    scanf("%d", &numero);

    int multiplicacao = 1;
    for (int i = 1; i <= numero; i++) {
        multiplicacao *= i;
    }
    printf("O fatorial de %d e: %d", numero, multiplicacao);
    return 0;
}