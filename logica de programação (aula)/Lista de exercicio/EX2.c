#include <stdio.h>

int main()
{
    double consumo, pessoas, taxa, dividir;

    printf("Digite o valor total consumido: ");
    scanf("%lf", &consumo);

    printf("Digite a quantidade de pessoas que vao dividir a conta: ");
    scanf("%lf", &pessoas);

    taxa = consumo + (consumo * 0.10); // taxa de 10%
    dividir = taxa / pessoas;

    printf("Os valores sao:\n \tconsumo: %.2f\n \tTaxa: 10%%\n \tValor total com a taxa: %.2f\n \tCada pessoa vai pagar: %.2f\n", consumo, taxa, dividir);

    return 0;
}