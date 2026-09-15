#include <stdio.h>

int main() {
    int opcao;
    float valor, resultado;

    printf("1 - Quilometros para metros\n");
    printf("2 - Metros para centimetros\n");
    printf("3 - Horas para minutos\n");
    printf("4 - Minutos para segundos\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1:
            resultado = valor * 1000;
            printf("Resultado: %.2f metros\n", resultado);
            break;
        case 2:
            resultado = valor * 100;
            printf("Resultado: %.2f centimetros\n", resultado);
            break;
        case 3:
            resultado = valor * 60;
            printf("Resultado: %.2f minutos\n", resultado);
            break;
        case 4:
            resultado = valor * 60;
            printf("Resultado: %.2f segundos\n", resultado);
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}