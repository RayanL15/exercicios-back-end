#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");

    float valorConsumido, valorTotal, valorDividido, taxa;
    int pessoas;

    printf("\nValor total consumido:\n");
    scanf("%f", &valorConsumido);

    printf("Quantas pessoas dividirão a conta?\n");
    scanf("%d", &pessoas);

    taxa = valorConsumido*0.10;
    valorTotal = valorConsumido+(valorConsumido*0.10);
    valorDividido = valorTotal/pessoas;

    printf("\nValor de consumo:%2.f", valorConsumido);
    printf("\nValor da taxa:%.2f", taxa);
    printf("\nValor total: %.2f", valorTotal);
    printf("\nCada pessoa deve pagar:%.2f", valorDividido);
    


    
}