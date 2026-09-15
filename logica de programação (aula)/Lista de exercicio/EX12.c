#include <stdio.h>

int main() {
    int idade;
    float renda;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Renda mensal: ");
    scanf("%f", &renda);

    if (idade >= 18 && renda >= 2000.00) {
        printf("Emprestimo aprovado\n");
    } else {
        printf("Emprestimo negado\n");
    }

    return 0;
}