#include <stdio.h>
#include <locale.h> //Permite configurar regras regionais; aqui, usamos para o separador decimal.
#include <stdlib.h> //Oferece funções utilitárias, como gerar números pseudoaleatórios, converter texto em número e executar comandos com system().

int main(void) {
    system("chcp 65001 > nul"); //Configura o terminal do Windows para usar UTF-8, ajudando a mostrar acentos corretamente.
    setlocale(LC_ALL, "Portuguese"); //Configura todas as categorias regionais do programa para português, como números, datas e tratamento de caracteres.
    printf("Olá! Você está no programa de conversão. Atenção às informações!\n");
    
    int entrada, segundo, minuto, hora;

    printf("\nDigite um valor em segundos:\n");
    scanf("%d", &entrada);

    hora = entrada / 3600;
    minuto = (entrada / 60) % 60;
    segundo = entrada % 60;

    printf("\n%d horas.", hora);
    printf("\n%d minutos.", minuto);
    printf("\n%d segundos.", segundo);

    return 0;
}

/*
system(): executa um comando do sistema operacional.
chcp: vem de change code page, ou seja, mudar a página de códigos do terminal.
65001: é o número que identifica UTF-8.
> nul: esconde a mensagem de confirmação do comando. Não é obrigatório.

setlocale: define as configurações regionais do programa.
LC_ALL: seleciona todas as categorias de configuração regional, como regras para números, datas e tratamento de caracteres.
LC significa "localidade" e ALL significa “todos”.
"Portuguese": solicita a configuração regional de português.
*/
