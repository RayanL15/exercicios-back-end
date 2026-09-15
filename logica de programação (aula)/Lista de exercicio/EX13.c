#include <stdio.h>

int main() {
    int idade, estudante;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("E estudante? (1-Sim, 0-Nao): ");
    scanf("%d", &estudante);

    if (idade >= 60 || estudante == 1) {
        printf("Tem direito ao desconto\n");
    } else {
        printf("Nao tem direito ao desconto\n");
    }

    return 0;
}