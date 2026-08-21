#include <stdio.h>
#include <stdbool.h>

int main() {
    int resposta;

    printf("Esta chovendo? (1 = Sim, 0 = Nao): ");
    scanf("%d", &resposta);

    bool esta_chovendo = resposta;  // aqui converte pra true/false

    if (esta_chovendo) {
        printf("Leve o guarda-chuva!\n");
    } else {
        printf("Pode ir tranquilo.\n");
    }

	/*0 significa falso; Diferente de zero é verdadeiro*/

    return 0;
}
