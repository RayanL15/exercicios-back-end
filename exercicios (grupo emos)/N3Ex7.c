#include <stdio.h>

int main()
{
    int soma = 0;
    for (int i = 1; i <= 100; i++)
    {
        soma = soma + i;
    }
    printf("A soma de 1 ate 100 eh: %d", soma); // 1 + 2 + 3 + 4 + 5...
}