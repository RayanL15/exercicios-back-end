#include <stdio.h>

int main()
{
    int totalsegundos, horas, minutos, segundos;
    printf("Digite quantos segudos para converter em horas, minutos e segundos: ");
    scanf("%d", &totalsegundos);

    horas = totalsegundos / 3600;
    minutos = (totalsegundos % 3600) / 60;
    segundos = totalsegundos % 60;

    printf("%d segundos eh igual a:\n \t%d horas\n \t%d minutos\n \t%d segundos restantes", totalsegundos, horas, minutos, segundos);
    return 0;
}