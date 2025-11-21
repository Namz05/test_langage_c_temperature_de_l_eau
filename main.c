#include <stdlib.h>
#include <stdio.h>


int main() {
    int chx;
    char reponse;

    do {
        printf("TEMPERATURE \n");
        printf("Veuillez choisir l'etat de l'eau que vous souhaitez : \n");
        printf("1-SOLIDE \n");
        printf("2-LIQUIDE \n");
        printf("3-GAZEUX\n");
        scanf("%d", &chx);

        if (chx == 1) {
            printf("La temperature de l'eau est egale ou inferieures a 0 degres Celsius \n");
        } else if (chx == 2) {
            printf("La temperature de l'eau est entre 0 degres Celsius et 100 degres Celsius \n");
        } else if (chx == 3) {
            printf("La temperature de l'eau est superieure a 100 degres Celsius\n");
        } else {
            printf("Veuillez saisir un nombre entre 1 et 3\n");
        }

        printf("Voulez-vous continuer ? (o/n) : ");
        scanf(" %c", &reponse);  
    } while (reponse == 'o');

    return 0;
}
