#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = (float)numero1 / numero2;

    printf("\t soma: %d\n \t subtracao: %d\n \t multiplicacao: %d\n \t divisao: %.2f", soma, subtracao, multiplicacao, divisao);
    return 0;
}