#include <stdio.h>

int main() {
    // Variables
    int numero;

    printf("\n\tCalculador de numero par o impar\n");

    // Pedir numero
    printf("\n\tIngrese el numero: ");
    scanf("%i", &numero);

    printf("\n\t");

    // Evaluar si es par o impar
    if (numero % 2 == 0) {
        printf("El numero es par");
    } else {
        printf("El numero es impar");
    }

    printf("\n");

    return 0;
}