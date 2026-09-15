#include <stdio.h>

int main() {
    float km, litros, consumo;

    printf("Distancia percorrida (km): ");
    scanf("%f", &km);
    printf("Litros utilizados: ");
    scanf("%f", &litros);

    consumo = km / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8) {
        printf("Consumo alto\n");
    } else if (consumo <= 12) {
        printf("Consumo medio\n");
    } else {
        printf("Consumo economico\n");
    }

    return 0;
}