#include <stdio.h>
int main() {

    for(int i = 1; i <= 10; i += 2) {
        printf("%d\t", i);
    }

    printf("\n");
    printf("\n");

    for(int s = 20; s >= 0; s -= 2) {
        printf("%d\t", s);
    }
    
    printf("\n");
    printf("\n");

    for(int m = 1; m <= 100; m *= 2) {
        printf("%d\t", m);
    }

    printf("\n");
    printf("\n");
    
    for(int d = 100; d >= 1; d /= 2) {
        printf("%d\t", d);
    }

    return 0;
}
