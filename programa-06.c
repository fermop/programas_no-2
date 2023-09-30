#include <stdio.h>

int main() {
    // Variables
    int inicio, fin, noEsPrimo = 0, i, j;

    printf("\n\tNumeros primos en cierto rango");

    // Pedir datos
    printf("\n\n\tIngrese el valor inicial del rango: ");
    scanf("%i", &inicio);
    printf("\tIngrese el valor final del rango: ");
    scanf("%i", &fin);

    // Evaluar que se haya ingresado un rango valido
    if (inicio <= fin) {
        // Al menos existe un numero primo en el rango
        if (fin > 1) {
            printf("\n\tLos numeros primos en el rango de %i a %i son:", inicio, fin);
            for (i = inicio; i <= fin; i++) {
                if (i < 2) {
                    continue;
                }
                for (j = 2; j < i; j++) {
                    if (i % j == 0) {
                        noEsPrimo++;
                        break;
                    }
                }
                if (noEsPrimo != 0) {
                    noEsPrimo = 0;
                    continue;
                }
                printf("\n\t%i", i);
            }
        // No hay numeros primos en el rango
        } else {
            printf("\n\tNo hay numeros primos en el rango de %i a %i", inicio, fin);
        }
    } else {
        printf("\n\tLo sentimos, el valor inicial no puede ser mayor al valor final");
    }

    printf("\n");

    return 0;
}