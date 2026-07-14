#include <stdio.h>

int main() {
    
    int celsius;
    printf("\t Digite a temperatura em Celsius: ");
    scanf ("%d", &celsius);

    float fahrenheit = (celsius * 9.0 / 5) + 32;

    printf("\t %d graus Celsius equivalem a %.2f graus fahrenheit" , celsius, fahrenheit);

    if (celsius > 30) {
        printf("\n \t Esta muito quente!");
    }

    else if (celsius < 15) {
        printf("\n \t Esta muito frio!");
    }
    
    else {
        printf("\n \t Temperatura agradavel");
    }
    
    return 0;
}