#include <stdio.h>
#include <string.h>

int main() {

    char giorno[20];
    int giornoN;

    
    printf("Inserisci un giorno della settimana (es. lunedi): ");
    scanf("%s", giorno);  

    
    if (strcmp(giorno, "lunedi") == 0) {
        giornoN = 1;
    } else if (strcmp(giorno, "martedi") == 0) {
        giornoN = 2;
    } else if (strcmp(giorno, "mercoledi") == 0) {
        giornoN = 3;
    } else if (strcmp(giorno, "giovedi") == 0) {
        giornoN = 4;
    } else if (strcmp(giorno, "venerdi") == 0) {
        giornoN = 5;
    } else if (strcmp(giorno, "sabato") == 0) {
        giornoN = 6;
    } else if (strcmp(giorno, "domenica") == 0) {
        giornoN = 7;
    } else {
        printf("Errore: giorno non valido.\n");
        return 1; 
    }

    
    switch (giornoN) {
        case 1:
            printf("lunedì\n");
            break;
        case 2:
            printf("martedì\n");
            break;
        case 3:
            printf("mercoledì\n");
            break;
        case 4:
            printf("giovedì\n");
            break;
        case 5:
            printf("venerdì\n");
            break;
        case 6:   
        case 7:
            printf("Weekend\n");
            break;
    }

    return 0;
}
