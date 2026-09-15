#include <stdio.h>
int main()
{
    char nome[50];
    char evento[20];
    int idade, tipo, estudante;
    double valorOriginal, desconto, valorFinal;
    double porcentagem;

    printf("Nome do cliente: ");
    gets(nome);
    printf("Idade: ");
    scanf("%d", &idade);

    printf("Tipos de ingresso:\n");
    printf("1 - Cinema (R$ 40,00)\n");
    printf("2 - Teatro (R$ 60,00)\n");
    printf("3 - Show (R$ 120,00)\n");
    printf("4 - Parque (R$ 80,00)\n");
    printf("Escolha o tipo de ingresso: ");
    scanf("%d", &tipo);

    switch (tipo)
    {
    case 1:
        valorOriginal = 40.00;
        sprintf(evento, "Cinema");
        break;
    case 2:
        valorOriginal = 60.00;
        sprintf(evento, "Teatro");
        break;
    case 3:
        valorOriginal = 120.00;
        sprintf(evento, "Show");
        break;
    case 4:
        valorOriginal = 80.00;
        sprintf(evento, "Parque");
        break;
    default:
        printf("Tipo de ingresso invalido!\n");
        return 0;
    }

    printf("Possui carteirinha de estudante? (1-Sim / 0-Nao): ");
    scanf("%d", &estudante);

    if (idade < 12)
    {
        porcentagem = 50;
    }
    else if (idade >= 60)
    {
        porcentagem = 50;
    }
    else if (estudante == 1)
    {
        porcentagem = 30;
    }
    else
    {
        porcentagem = 0;
    }

    desconto = valorOriginal * (porcentagem / 100);
    valorFinal = valorOriginal - desconto;

    printf("\n\tRESUMO DA COMPRA\n");
    printf("Cliente: %s\n", nome);
    printf("Evento: %s\n", evento);
    printf("Valor original: R$ %.2f\n", valorOriginal);
    printf("Desconto: %.0f%%\n", porcentagem);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
