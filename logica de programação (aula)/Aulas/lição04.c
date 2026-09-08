#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int opc, preco;
    float quant, total = 0;
    char veiculo [50] = "";

    printf("----SELECIONA SEU TIPO DE VEÍCULO-------");
    printf("\n1 - Motocicleta: R$3,00 a hora\n");
    printf("\n2 - Carro: ......R$6,00 a hora\n");
    printf("\n3 - Caminhonete: R$8,00 a hora\n");
    printf("\n4 - Van:.........R$10,00 a hora\n");

    printf("Selecione o tipo de veículo:\n");
    scanf("%d", &opc);

    if (opc < 1 || opc > 4)
    {
        printf("Opcao invalida!");
        return 0;
    }
    printf("Quantas horas o veiculo ficou estacionado?\n");
    scanf("%f", &quant);

    switch (opc)
    {
    case 1:
        strcpy(veiculo, "Motocicleta");
        preco = 3;
        total = quant*preco;
        break;
    case 2:
        strcpy(veiculo, "Carro");
        preco = 6;
        total = quant*preco;
        break;
    case 3:
        strcpy(veiculo, "Caminhonete");
        preco = 8;
        total = quant*preco;
        break;
    case 4:
        strcpy(veiculo, "Van");
        preco = 10;
        total = quant*preco;
        break;
    
    default:
        break;
    }

    printf("Tipo de veiculo: %s\n", veiculo);
    printf("Quantidade de horas parado: %.2f\n", quant);
    printf("Valor por hora:%d\n", preco);
    printf("Total a pagar:%.2f\n", total);

    
}