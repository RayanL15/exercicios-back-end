/* Este programa Le o salario bruto de uma pessoa, a taxa de imposto de renda e a taxa de inss. Em seguida, mostra o seguinte menu:
Escolha uma das opcoes abaixo:
1: Salario liquido;
2: Valor descontado pelo imposto de renda;
3: Valor descontado pelo inss.
O usuario seleciona uma opcao e o programa exibe o que o usuário deseja.
Caso nenhuma das opcoes seja escolhida, imprime-se mensagem de erro.*/
#include <stdio.h>
int main()
{
    printf("Insira os seguintes dados...\n");

    // Opcao selecionada no menu.
    int opcao;
    float salario_bruto, taxa_ir, taxa_inss;
    float salario_liquido, valor_ir, valor_inss;

    printf("salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("taxa de imposto de renda: ");
    scanf("%f", &taxa_ir);

    printf("taxa de INSS: ");
    scanf("%f", &taxa_inss);

    // Calculando os valores descontados e o salario liquido.
    valor_ir = taxa_ir * salario_bruto / 100;
    valor_inss = taxa_inss * salario_bruto / 100;
    salario_liquido = salario_bruto - valor_inss - valor_ir;

    printf("Escolha uma das opcoes abaixo.\n");
    printf("\t1- Salario liquido.\n");
    printf("\t2- Valor descontado pelo Imposto de renda.\n");
    printf("\t3- Valor descontado pelo INSS.\n");
    scanf("%d", &opcao);

    // Menu de opções.
    switch (opcao)
    {
    case 1:
        printf("Salario liquido: %.2f reais.\n", salario_liquido);
        break;
    case 2:
        printf("Desconto de imposto de renda: %.2f reais.\n", valor_ir);
        break;
    case 3:
        printf("Desconto de INSS: %.2f reais.\n", valor_inss);
        break;
    default:
        printf("Voce selecionou uma opcao invalida.\n   Tente novamente.");
    }
    return 0;
}