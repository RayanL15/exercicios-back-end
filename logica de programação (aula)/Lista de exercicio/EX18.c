#include <stdio.h>

int main() {
    int tipo, quantidade;
    float preco, total;

    printf("1 - Inteira (R$ 32,00)\n2 - Meia-entrada (R$ 16,00)\n3 - Infantil (R$ 12,00)\n");
    printf("Escolha o tipo: ");
    scanf("%d", &tipo);
    printf("Quantidade de ingressos: ");
    scanf("%d", &quantidade);

    switch (tipo) {
        case 1:
            preco = 32.00;
            break;
        case 2:
            preco = 16.00;
            break;
        case 3:
            preco = 12.00;
            break;
        default:
            printf("Tipo invalido\n");
            return 0;
    }

    total = preco * quantidade;

    if (quantidade >= 5) {
        total = total * 0.90;
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}