#include <stdio.h>

int main() {
    int quantidade;
    printf("Quantos numeros voce quer somar?: ");
    scanf("%d", &quantidade);

    int soma = 0;

    for (int i = 1; i <= quantidade; i++) {
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma total e: %d", soma);
    return 0;
}