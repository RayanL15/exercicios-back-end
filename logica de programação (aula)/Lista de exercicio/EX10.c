#include <stdio.h>

int main() {
    float compra, frete, total;

    printf("Valor da compra: ");
    scanf("%f", &compra);

    if (compra < 100.00) {
        frete = 25.00;
    } else if (compra < 200.00) {
        frete = 15.00;
    } else if (compra < 300.00) {
        frete = 8.00;
    } else {
        frete = 0.00;
    }

    total = compra + frete;

    printf("Compra: R$ %.2f\n", compra);
    printf("Frete: R$ %.2f\n", frete);
    printf("Total: R$ %.2f\n", total);

    return 0;
}