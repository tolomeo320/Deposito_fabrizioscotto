#include <stdio.h>

int main() {
    int num;

    printf("Inserire un numero intero: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0) {
        printf("Numero positivo e pari\n");
        if (num > 50) {
            printf("Molto grande!\n");
        }
    } else if (num < 0 || num >= 100) {
        printf("Numero negativo o maggiore uguale a 100\n");
        if (num % 5 == 0) {
            printf("Multiplo di 5\n");
        }
    } else {
        printf("Il numero non soddisfa le condizioni\n");
        if (num != 0) {
            printf("Numero diverso da zero\n");
        }
    }

    return 0;
}
