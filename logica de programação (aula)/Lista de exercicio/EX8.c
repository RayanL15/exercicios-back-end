#include <stdio.h>

int main() {
    float valor, desconto, final;

    printf("Valor da compra: ");
    scanf("%f", &valor);

    if (valor < 100.00) {
        desconto = 0;
    } else if (valor < 200.00) {
        desconto = valor * 0.05;
    } else if (valor < 500.00) {
        desconto = valor * 0.10;
    } else {
        desconto = valor * 0.15;
    }

    final = valor - desconto;

    printf("Valor original: R$ %.2f\n", valor);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", final);

    return 0;
}