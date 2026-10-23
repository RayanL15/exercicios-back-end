#include <stdio.h>
#include <locale.h> //configura regras regionais, como a vírgula decimal e o tratamento de caracteres em certas funções.
#include <stdlib.h> //oferece funções utilitárias, como gerar números pseudoaleatórios, converter texto em número e executar comandos do sistema com system().

int main (){
    system("chcp 65001 > nul"); //Essa linha configura o terminal do Windows para usar UTF-8, ajudando a mostrar acentos corretamente.
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