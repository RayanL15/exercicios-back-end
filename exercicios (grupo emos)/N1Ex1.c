#include <stdio.h>
#define TAM_nome 200
int main()
{
    char nome[TAM_nome];
    printf("Digite o seu nome completo: ");
    fgets(nome, TAM_nome, stdin);

    printf("o seu nome eh: %s", nome);
    return 0;
}