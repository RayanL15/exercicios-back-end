#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");

    int entrada, segundo, minuto, hora;
    
    printf("\nDigite um valor em segundos:\n");
    scanf("%d", entrada);

   hora = entrada/3600;
   minuto = (entrada/3600)%60;
   segundo = ((entrada/3600)%60)%60;

    printf("\n%d horas.", hora);
      printf("\n%d minutos.", minuto);
        printf("\n%d segundos.", segundo);