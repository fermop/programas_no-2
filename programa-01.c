#include <stdio.h>

int main() {
    // Variables
    int tipoDeSabor, tipoDeComida;

    printf("\n\tRecomendador de comida\n");

    // Preguntar que tipo de comida le gusta
    printf("\n\tSeleccione que tipo de sabor le gusta:");
    printf("\n\t1 = Salado");
    printf("\n\t2 = Dulce");
    printf("\n\t3 = Agridulce");
    printf("\n\tSabor: ");
    scanf("%i", &tipoDeSabor);

    printf("\n\t");

    // Preguntar si desea comida o postre/botana
    if (tipoDeSabor > 0 && tipoDeSabor < 4) {
        printf("Desea comida o postre/botana?");
        printf("\n\t1 = Comida");
        printf("\n\t2 = Postre/Botana");
        printf("\n\tPlatillo: ");
        scanf("%i", &tipoDeComida);

        printf("\n\t");

        if (tipoDeComida > 0 && tipoDeComida < 3) {
            // Comida
                // Salada
            if (tipoDeComida == 1 && tipoDeSabor == 1) {
                printf("El platillo seria calabacines rellenos de carne picada");
                // Dulce
            } else if (tipoDeComida == 1 && tipoDeSabor == 2) {
                printf("El platillo seria barbacoa de pollo adobado");
                // Agridulce
            } else if (tipoDeComida == 1 && tipoDeSabor == 3) {
                printf("El platillo seria bacalao al horno con manzana salteada y alioli de miel");

            // Postre/Botana
                // Salado
            } else if (tipoDeComida == 2 && tipoDeSabor == 1) {
                printf("El postre seria flan salado con ricotta y queso de cabra");
                // Dulce
            } else if (tipoDeComida == 2 && tipoDeSabor == 2) {
                printf("El postre seria cheesecake con fresas en olla de presion");
                // Agridulce
            } else {
                printf("El postre seria tiramisu de limon");
            }
        } else {
            printf("Lo sentimos, el tipo de comida seleccionada es invalida");
        }
    } else {
        printf("Lo sentimos, el sabor seleccionado es invalido");
    }

    printf("\n");

    return 0;
}