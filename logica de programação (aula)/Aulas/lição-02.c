#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int curso;

    printf("-----ESCOLHA UM CURSO-----");

    printf("1 - Engenharia de Software\n");
    printf("2 - Ciencia da Computação\n");
    printf("3 - Sistemas da Informação\n");
    printf("4 - Análise e Desenvolvimento de Sistemas\n");

    scanf("%d", &curso);

    switch (curso)
    {
    case 1:
           printf("Curso escolhido: Engenharia de Software");
           break;
    case 2:
           printf("Curso escolhido: Ciencia da Computação");
           break;
    case 3:
           printf("Curso escolhido: Sistemas da Informação");
           break;
    case 4:
           printf("Curso escolhido: Análise e Desenvolvimento de Sistemas");
             break;
    
    default:
    printf("Curso inválido!");
        break;
    }
}