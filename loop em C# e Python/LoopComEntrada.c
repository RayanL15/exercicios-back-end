#include <stdio.h>
int main(){

    int numero;
    printf("Digite o numero da tabuada: ");
    scanf("%d", &numero); 

    int limite;
    printf("Ate quantas vezes?: ");
    scanf("%d", &limite); 

    for (int i = 1; i <= limite; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

return 0;
}
