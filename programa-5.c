#include <stdio.h>

int main() {
    // Variables
    int inicio, fin, i;

    printf("\n\tNumeros pares en cierto rango");

    // Pedir datos
    printf("\n\n\tIngrese el valor inicial del rango: ");
    scanf("%i", &inicio);
    printf("\tIngrese el valor final del rango: ");
    scanf("%i", &fin);

    // Evaluar que se haya ingresado un rango valido
    if (inicio <= fin) {
        printf("\n\t");
        // Al menos 1 numero par existe en el rango
        if (inicio % 2 == 0 || fin % 2 == 0 || inicio != fin) {
            printf("Los numeros pares en el rango de %i a %i son:", inicio, fin);
            for (i = inicio; i <= fin; i++) {
                if (i % 2 == 0) {
                    printf("\n\t%i", i);
                }
            }
        // No hay numeros pares en el rango
        } else {
            printf("No existen numeros pares en el rango de %i a %i", inicio, fin);
        }
    } else {
        printf("\n\tLo sentimos, el valor inicial no puede ser mayor al valor maximo");
    }

    printf("\n");

    return 0;
}