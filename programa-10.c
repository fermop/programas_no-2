#include <stdio.h>

int main() {
    int genero, instrumento;

    printf("\n\tGeneros:");
    printf("\n\t1 = Cumbia");
    printf("\n\t2 = Bachata");
    printf("\n\t3 = Salsa");
    printf("\n\t4 = Rock");
    printf("\n\t5 = Pop");
    printf("\n\t6 = Corridos");
    printf("\n\n\tSelecciona tu genero favorito: ");
    scanf("%i", &genero);

    if (genero > 0 && genero < 7) {
        printf("\n\tInstrumentos:");
        printf("\n\t1 = Guitarra");
        printf("\n\t2 = Bajo");
        printf("\n\t3 = Bateria");
        printf("\n\n\tSelecciona un instrumento: ");
        scanf("%i", &instrumento);

        printf("\n\t");

        if (genero == 1 && instrumento == 1) { // Cumbia y guitarra
            printf("Jay de la Cueva");
        } else if (genero == 1 && instrumento == 2) { // Cumbia y bajo
            printf("Francisco Javier Munoz");
        } else if (genero == 1 && instrumento == 3) { // Cumbia y bateria
            printf("Jose Cespedes");
        } else if (genero == 2 && instrumento == 1) { // Bachata y guitarra
            printf("Romeo Santos");
        } else if (genero == 2 && instrumento == 2) { // Bachata y bajo
            printf("Max Santos");
        } else if (genero == 2 && instrumento == 3) { // Bachata y bateria
            printf("Raulin Rodriguez");
        } else if (genero == 3 && instrumento == 1) {// Salsa y guitarra
            printf("Carlos Santana");
        } else if (genero == 3 && instrumento == 2) {// Salsa y bajo
            printf("Bobby Valentin");
        } else if (genero == 3 && instrumento == 3) {// Salsa y bateria
            printf("Tito Puente");
        } else if (genero == 4 && instrumento == 1) {// Rock y guitarra
            printf("Jimi Hendrix");
        } else if (genero == 4 && instrumento == 2) {// Rock y bajo
            printf("Michael Peter Balzary");
        } else if (genero == 4 && instrumento == 3) {// Rock y bateria
            printf("John Bonham");
        } else if (genero == 5 && instrumento == 1) { // Pop y guitarra
            printf("John Mayer");
        } else if (genero == 5 && instrumento == 2) { // Pop y bajo
            printf("Mark Stoermer");
        } else if (genero == 5 && instrumento == 3) { // Pop y bateria
            printf("Max Martin");
        } else if (genero == 6 && instrumento == 1) { // Corridos y guitarra
            printf("Natanael Cano");
        } else if (genero == 6 && instrumento == 2) { // Corridos y bajo
            printf("Lenin Ramirez");
        } else if (genero == 6 && instrumento == 3) { // Corridos y bateria
            printf("Alex Bernal");
        } else { // Opcion invalida
            printf("Lo sentimos, el instrumento seleccionado no existe");
        }
    } else {
        printf("\n\tLo sentimos, el genero seleccionado no existe");
    }

    printf("\n");

    return 0;
}