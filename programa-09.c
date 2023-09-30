#include <stdio.h>

int main() {
    // Variables
    float calif_1, calif_2, calif_3, calif_4, calif_5, prom;

    // Pedir calificaciones
    printf("\n\tIngrese el valor de la calificacion 1: ");
    scanf("%f", &calif_1);
    printf("\tIngrese el valor de la calificacion 2: ");
    scanf("%f", &calif_2);
    printf("\tIngrese el valor de la calificacion 3: ");
    scanf("%f", &calif_3);
    printf("\tIngrese el valor de la calificacion 4: ");
    scanf("%f", &calif_4);
    printf("\tIngrese el valor de la calificacion 5: ");
    scanf("%f", &calif_5);

    // Operaciones
    prom = (calif_1 + calif_2 + calif_3 + calif_4 + calif_5) / 5;

    // Devolver datos
    printf("\n\tEl promedio es: %.2f\n", prom);

    return 0;
}