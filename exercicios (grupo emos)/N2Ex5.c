#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero2);
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3)
    {
        printf("O numero %d eh o maior!", numero1);
    }
    else if (numero2 >= numero1 && numero2 >= numero3)
    {
        printf("O numero %d eh o maior!", numero2);
    }
    else
    {
        printf("O numero %d eh o maior!", numero3);
    }

    return 0;
}