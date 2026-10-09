#include <stdio.h>
#include <string.h>
#define N 50 // Limite de 50 caracteres por texto

int main()
{
    char str1[N];
    char str2[N];
    char aux[N];

    // Lê os dois textos digitados. Ex:
    // str1: "eu gosto de ESTUDAR "
    // str2: "programacao em Linguagem C"
    gets(str1);
    gets(str2);

    // strlen = conta a quantidade de letras
    printf("Tamanhos: %d e %d, repectivamente.\n", strlen(str1), strlen(str2));

    // strcpy = copia o texto de str1 para aux (para não alterar a str1 original)
    strcpy(aux, str1);
    // strlwr = converte para minúsculas
    printf("1ra string em minusculas: %s\n", strlwr(aux));

    // strcpy = copia o texto de str2 para aux
    strcpy(aux, str2);
    // strupr = converte para maiúsculas
    printf("2da string em maiusculas: %s\n", strupr(aux));

    // strcasecmp = compara em ordem alfabética (o "case" ignora maiúsculas/minúsculas)
    if (strcasecmp(str1, str2) < 0)
    {
        printf("%s ||| %s\n", str1, str2); // str1 vem primeiro
    }
    else
    {
        printf("%s ||| %s\n", str2, str1); // str2 vem primeiro
    }

    // strcat = junta o segundo texto no final do primeiro
    printf("Concatenacao: %s\n", strcat(str1, str2));

    return 0;
}