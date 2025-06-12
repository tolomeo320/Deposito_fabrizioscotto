#include <stdio.h>

int main() {
    int numero1, numero2;
    
    // print scan dei numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    // Calcol
    printf("Risultati matematici ---\n");
    printf("Somma: %d\n", numero1 + numero2);
    printf("Differenza: %d\n", numero1 - numero2);
    printf("Prodotto: %d\n", numero1 * numero2);


// oplogici

    // Entrambi positivi
    if (numero1 > 0 && numero2 > 0) {
        printf("i nueri sono maggiori di zero.\n");
    } else {
        printf("Almeno uno dei due numeri noi è maggiore di zero.\n");
    }

if (numero1 % 2 == 0 || numero2 % 2 == 0) {
    printf("Un numero è pari.\n");
}else {
    printf("Nessuno numero è pari.\n");


    return 0;
}
