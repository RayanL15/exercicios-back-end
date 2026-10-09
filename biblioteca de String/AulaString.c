#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[] = "Fabio";
    char nome2[] = "Fabio";

    if (strcmp(nome1, nome2) == 0) // tambem poderia ser usado: if (!strcmp(nome1, nome2))
    {
        printf("Nomes sao iguais.");
    }
    else
    {
        printf("Nomes sao diferentes.");
    }
    return 0;
}

/*A função strcmp mede a diferença entre duas palavras.
Se as palavras forem iguais: A diferença é zero (0).
Se forem diferentes: Devolve outro número qualquer (ex: 1 ou -1).*/