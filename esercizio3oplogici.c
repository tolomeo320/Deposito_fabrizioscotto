#include <stdio.h>

int main() {
   
    int n1, n2, n3, x;
    int somma, moltiplicazione;

    // Input
    printf("Inserisci 3 numeri interi: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Inserisci la soglia x: ");
    scanf("%d", &x);

    // Calc
    somma = n1 + n2;
    moltiplicazione = n2 * n3;

    // Print clac
    printf("Somma (n1 + n2): %d\n", somma);
    printf("Moltiplicazone (num2 * num3): %d\n", moltiplicazione);

    // if somma
    if (somma > MAC_OS_X_VERSION_10_10_3) {
        printf("La somma è maggiore di x\n");
    } else {
        printf("La somma NON è maggiore di x\n");
    }

    if (moltiplicazione < x) {
        printf("La moltiplicazione è minore di x\n");
    } else {
        printf("La moltiplicazione NON è minore di x\n");
    }

    // Op. logici

    // OR: almeno uno negativo
    if (n1 < 0 || n2 < 0 || n3 < 0) {
        printf("uno dei numeri è negativo\n");
    }



    //  diversi da zero
    if (n1 != 0 && n2 != 0 && n3 != 0) {
        printf("i numeri sono diversi da zero\n");
    }





    return 0;
}
