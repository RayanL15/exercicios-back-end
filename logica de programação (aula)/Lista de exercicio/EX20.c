#include <stdio.h>

int main() {
    int tipo;
    float litros, preco, valorSemDesconto, desconto, valorFinal;

    printf("1 - Gasolina (R$ 6,20)\n2 - Etanol (R$ 4,30)\n3 - Diesel (R$ 6,00)\n");
    printf("Escolha o combustivel: ");
    scanf("%d", &tipo);
    printf("Quantidade de litros: ");
    scanf("%f", &litros);

    switch (tipo) {
        case 1:
            preco = 6.20;
            break;
        case 2:
            preco = 4.30;
            break;
        case 3:
            preco = 6.00;
            break;
        default:
            printf("Combustivel invalido\n");
            return 0;
    }

    valorSemDesconto = preco * litros;

    if (valorSemDesconto > 300.00) {
        desconto = valorSemDesconto * 0.10;
    } else if (valorSemDesconto > 200.00) {
        desconto = valorSemDesconto * 0.05;
    } else {
        desconto = 0;
    }

    valorFinal = valorSemDesconto - desconto;

    printf("Combustivel escolhido: %d\n", tipo);
    printf("Litros: %.2f\n", litros);
    printf("Valor sem desconto: R$ %.2f\n", valorSemDesconto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}