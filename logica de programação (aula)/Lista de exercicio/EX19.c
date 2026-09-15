#include <stdio.h>

int main() {
    int idade, ingresso, acompanhado;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Possui ingresso? (1-Sim, 0-Nao): ");
    scanf("%d", &ingresso);
    printf("Esta acompanhado por responsavel? (1-Sim, 0-Nao): ");
    scanf("%d", &acompanhado);

    if ((idade >= 18 && ingresso == 1) || (idade < 18 && ingresso == 1 && acompanhado == 1)) {
        printf("Entrada permitida\n");
    } else {
        printf("Entrada nao permitida\n");
    }

    return 0;
}