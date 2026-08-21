#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero para saber a tabuada: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", i, numero, i * numero);
    }
    return 0;
}