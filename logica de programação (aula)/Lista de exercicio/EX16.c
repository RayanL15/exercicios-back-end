#include <stdio.h>

int main() {
    int veiculo;
    float horas, preco, total;

    printf("1 - Moto\n2 - Carro\n3 - Caminhonete\n");
    printf("Escolha o veiculo: ");
    scanf("%d", &veiculo);
    printf("Quantidade de horas: ");
    scanf("%f", &horas);

    switch (veiculo) {
        case 1:
            preco = 3.00;
            break;
        case 2:
            preco = 5.00;
            break;
        case 3:
            preco = 8.00;
            break;
        default:
            printf("Veiculo invalido\n");
            return 0;
    }

    total = preco * horas;

    if (horas > 5) {
        total = total * 0.90;
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}