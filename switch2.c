#include <stdio.h>
#include <string.h>

int main() {
    char ruolo[20];      
    int opzione;         
    int segreto = 0;     

    //ruolo
    printf("Inserisci il tuo ruolo (studente, docente, ospite): ");
    scanf("%19s", ruolo);

    // opzione
    printf("Scegli un'opzione (1: Visualizza, 2: Modifica, 3: Esci): ");
    scanf("%d", &opzione);

    //  ruolo + opzione
    if (strcmp(ruolo, "studente") == 0 && opzione == 1) {
        printf("Accesso a materiali didattici\n");
    } else if (strcmp(ruolo, "docente") == 0 || opzione == 2 || opzione == 1) {
        printf("Accesso alla gestione corsi\n");
    } else if (strcmp(ruolo, "ospite") == 0) {
        printf("Area informativa\n");
    } else {
        printf("Opzione non disponibile\n");
    }

    // Switch sull'opzione 
    switch (opzione) {
        case 1:
            printf("Hai scelto: Visualizza\n");
            segreto = 1;  
            break;
        case 2:
            printf("Hai scelto: Modifica\n");
            segreto = 2;  
            break;
        case 3:
            printf("Hai scelto: Esci\n");
            segreto = 3;  
            break;
        default:
            printf("Opzione di menu non valida\n");
            break;
    }

   

    return 0;
}
