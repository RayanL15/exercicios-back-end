#include <stdio.h>

int main() {
    float n1, n2, resultado;
    int opcao;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (n2 != 0) {
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Nao e possivel dividir por zero\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}