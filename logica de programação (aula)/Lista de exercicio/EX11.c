#include <stdio.h>

int main() {
    float velocidade;
    float limite = 80.0;

    printf("Velocidade do veiculo (km/h): ");
    scanf("%f", &velocidade);

    if (velocidade <= limite) {
        printf("Velocidade permitida\n");
    } else if (velocidade <= limite + 20) {
        printf("Infracao media\n");
    } else {
        printf("Infracao grave\n");
    }

    return 0;
}