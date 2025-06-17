#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeri;
    int somma = 0;
    bool continua = true;

    while (continua) {
        printf("Inserisci un numero, altrimenti 0 per terminare: ");
        scanf("%d", &numeri);
        printf("Hai inserito: %d\n", numeri);  

         if (numeri > 0) {
            somma += numeri;
        }
        else if (numeri == 0) {
            continua = false;
        }
    }

    printf("La somma totale dei numeri positivi è: %d\n", somma);
    return 0;
}
