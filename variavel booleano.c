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

	/*O bool não "sabe" nada sozinho — é uma regra de conversão que o C aplica.
	Toda vez que você atribui um valor a uma variável bool, o C faz essa pergunta por trás dos panos:
	"Esse valor é zero ou diferente de zero?"
	Se for zero ? vira false (guardado como 0)
	Se for qualquer outra coisa (1, 2, -5, 100...) ? vira true (guardado como 1)*/

    return 0;
}
