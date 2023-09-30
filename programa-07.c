#include <stdio.h>

int main() {
    int i = 0;
    
    printf("\n\tCaracteres del codigo ASCII");

    for (i; i <= 255; i++) {
        printf("\n\n\t%i = %c", i, i);
    }

    printf("\n");

    return 0;
}