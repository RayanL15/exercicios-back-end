#include <stdio.h>
int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    int soma = 0;
    
    while (numero !=0)
    {
        soma += numero;
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);
    }

    printf("A soma total: %d", soma);
    return 0;
}