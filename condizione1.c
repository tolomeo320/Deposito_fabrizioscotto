#include <stdio.h>

int main() {
    int x;

    printf("Inserisci un numero intero: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("Il numero è positivo.\n");

        if (x > 100) {
            printf("wow\n");
        }

    } else if (x < 0) {
        printf("Il numero è negativo.\n");

    } else {
        printf("Il numero è zero.\n");
    }

    return 0;
}
