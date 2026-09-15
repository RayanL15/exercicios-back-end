#include <stdio.h>

int main() {
    float compra, pago, troco;

    printf("Valor da compra: ");
    scanf("%f", &compra);
    printf("Valor pago pelo cliente: ");
    scanf("%f", &pago);

    troco = pago - compra;

    if (troco > 0) {
        printf("Pagamento realizado com sucesso. Troco: R$ %.2f\n", troco);
    } else if (troco == 0) {
        printf("Nao ha troco.\n");
    } else {
        printf("Valor insuficiente.\n");
    }

    return 0;
}