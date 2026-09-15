#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("FORMAM um triangulo\n");
    } else {
        printf("NAO FORMAM um triangulo\n");
    }

    return 0;
}