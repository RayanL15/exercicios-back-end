#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Voce eh MAIOR de idade!");
    }

    else
    {
        printf("voce eh MENOR de idade!");
    }

    return 0;
}