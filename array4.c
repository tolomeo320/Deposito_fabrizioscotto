#include <stdio.h>

int main() {
    int numeri[50];
    int nscelti;
    int i;
    int valoreUtente;
    int voccorrenze = 0;

    printf("Quanti numeri vuoi inserire? (tra 1 e 50):\n");
    scanf("%d", &nscelti);

    if (nscelti >= 1 && nscelti <= 50) {
        printf("Hai scelto di inserire %d numeri.\n", nscelti);

        for (i = 0; i < nscelti; i++) {
            printf("Inserisci il %d° numero: ", i + 1);
            scanf("%d", &numeri[i]);
        }

        printf("\nQuale valore vuoi cercare nell'array? ");
        scanf("%d", &valoreUtente);

        for (i = 0; i < nscelti; i++) {
            if (numeri[i] == valoreUtente) {
                voccorrenze++;
            }
        }

        printf("Il numero %d è stato trovato %d volte nell'array.\n", valoreUtente, voccorrenze);

    } else {
        printf("Valore inserito non valido. Il numero di elementi deve essere tra 1 e 50.\n");
    }

    return 0;
}
