#include <stdio.h>

int main() {
    float media, frequencia, renda;

    printf("Media do aluno: ");
    scanf("%f", &media);
    printf("Frequencia (em %%): ");
    scanf("%f", &frequencia);
    printf("Renda familiar: ");
    scanf("%f", &renda);

    if (media >= 8.0 && frequencia >= 75.0 && renda <= 4000.00) {
        printf("Bolsa aprovada\n");
    } else {
        printf("Bolsa nao aprovada\n");
    }

    return 0;
}