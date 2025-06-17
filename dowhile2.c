#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero;
    int pari = 0;
    char risposta;

    do {
        printf("Insersci un numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pari++;
        }

        printf("Vuoi coninuare? (s/n): ");
        scanf(" %c", &risposta);

    } while (risposta =='s');

    printf("Hai inserito %d numeri pari.\n", pari);

    return 0;
}
