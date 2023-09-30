#include <stdio.h>

int main() {
    int i = 2;

    printf("\n\tNumeros pares del 1 al 100\n");

    for (i; i <= 100; i = i + 2) {
        printf("\n\t%i", i);
    }

    printf("\n");

    return 0;
}