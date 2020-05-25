#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultat01 = 0, resultat02 = 0, resultat03 = 0, resultat04 = 0, nombre1 = 0, nombre2 = 0;

    // On demande les nombres 1 et 2 à l'utilisateur :

    printf("Entrez le nombre 1 : ");
    scanf("%d", &nombre1);

    printf("Entrez le nombre 2 : ");
    scanf("%d", &nombre2);

    // On fait le calcul :

    resultat01 = nombre1 + nombre2;
    resultat02 = nombre1 - nombre2;
    resultat03 = nombre1 * nombre2;
    resultat04 = nombre1 / nombre2;

    // Et on affiche l'addition à l'écran :

    printf ("%d + %d = %d\n", nombre1, nombre2, resultat01);
    printf ("%d - %d = %d\n", nombre1, nombre2, resultat02);
    printf ("%d * %d = %d\n", nombre1, nombre2, resultat03);
    printf ("%d / %d = %d\n", nombre1, nombre2, resultat04);

    return 0;
}
