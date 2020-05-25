#include <stdio.h>
#include <stdlib.h>

int main()
{
//    1ier test
//    int nombreDeVies = 5; // Au départ, le joueur a 5 vies
//
//    printf("Vous avez %d vies\n\n", nombreDeVies);
//    printf("**** B A M ****\n\n"); // Là il se prend un grand coup sur la tête
//    nombreDeVies = 4; // Il vient de perdre une vie !
//    printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n", nombreDeVies);

//    2ième test
//    int nombreDeVies = 5, niveau = 1;
//    printf("Vous avez %d vies et vous etes au niveau n° %d\n", nombreDeVies, niveau);

//    3ième test
    int age = 0; // On initialise la variable à 0

    printf("Quel age avez-vous ? ");
    scanf("%d", &age); // On demande d'entrer l'âge avec scanf
    printf("Ah ! Vous avez donc %d ans !\n\n", age);

    return 0;
}
