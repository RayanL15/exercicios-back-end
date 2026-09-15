#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("chcp 65001 > nul");

    int opc;
    float quant, preco = 0;
    char nome [50] = "";

    printf("---ESCOLHA UMA OPÇÃO----\n");
    printf("1 - Gasolina: R$6,20 p/L.\n");
    printf("2 - Etanol: R$4,30 p/L.\n");
    printf("3 - Diesel: R$6,50 p/L.\n");

    printf("\nDigite o tipo de combustivel desejado:\n");
    scanf("%d", &opc);

    if (opc < 1 || opc > 3)
    {
       printf("Opcao invalida!");
       return 0;
    }

    printf("\nDigite a quantidade em litros desejada:\n");
    scanf("%f", &quant);

    switch (opc)
    {
    case 1:
        strcpy(nome, "Gasolina");
        preco = quant * 6.20;
        break;

    case 2:
        strcpy(nome, "Etanol");
        preco = quant * 4.50;
        break;
    case 3:
        strcpy(nome, "Diesel");
        preco = quant * 6.50;
        break;
    
    default:
    break;
       
    }

    printf("Voce escolheu %.2f litros de %s\n", quant, nome);
    printf("Valor total a pagar: R$%.2f", preco);

    return 0;
}