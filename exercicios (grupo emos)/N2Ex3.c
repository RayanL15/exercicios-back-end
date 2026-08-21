#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero para saber se ele eh par ou impar: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("o numero %d eh par", numero);
    }

    else
    {
        printf("o numero %d eh impar", numero);
    }

    return 0;
}