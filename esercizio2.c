#include <stdio.h>

int main (){

    char città [15]; //città
    float numero1;   // numeri 1,2,3,
    float numero2;
    float numero3;
    float calcolo_media;

    //stampa e scan
    printf("Inserisci il nome della città\n ");
    scanf("%14s", città);

    printf("Inserisci tre numeri:\n");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    //calcolo media

    calcolo_media = (numero1 + numero2 + numero3) /3;

    //stampa
    printf("La media dei numeri a %s e': %.2f\n", città, calcolo_media);








    return 0;
}
