#include <stdio.h>

int main() {
    // Variables
    int tabla, inicio, final, i, res;

    printf("\n\tTabla de multiplicar personalizada\n");

    // Pedir datos
    printf("\n\tIngrese la tabla que desea: ");
    scanf("%i", &tabla);
    printf("\tIngrese el valor inicial de la tabla que desea: ");
    scanf("%i", &inicio);
    printf("\tIngrese el valor final de la tabla que desea: ");
    scanf("%i", &final);

    // Evaluar que se haya ingresado un rango valido
    if (inicio <= final) {
        printf("\n\tTabla del %i\n", tabla);

        for (i = inicio; i <= final; i++) {
            res = tabla * i;
            printf("\n\t%i x %i = %i", tabla, i, res);
        }
    } else {
        printf("\n\tLo sentimos, el valor inicial no puede ser mayor al valor final");
    }

    printf("\n");

    return 0;
}