#include <stdio.h>
#include <stdlib.h>

/*Voici ce que fait le programme dans l'ordre :
1-demander à l'utilisateur combien il a d'amis ;
2-créer un tableau de int ayant une taille égale à son nombre d'amis (via malloc) ;
3-demander l'âge de chacun de ses amis un à un, qu'on stocke dans le tableau ;
4-afficher l'âge des amis pour montrer qu'on a bien mémorisé tout cela ;
5-à la fin, puisqu'on n'a plus besoin du tableau contenant l'âge des amis, le libérer avec la fonction free.*/

int main()
{
    int nombreDAmis = 0, i = 0;
    int* ageAmis = NULL; // Ce pointeur va servir de tableau après l'appel du malloc

    // On demande le nombre d'amis à l'utilisateur
    printf("Combien d'amis avez-vous ? ");
    scanf("%d", &nombreDAmis);

    if (nombreDAmis > 0) // Il faut qu'il ait au moins un ami (je le plains un peu sinon :p)
    {
        ageAmis = malloc(nombreDAmis * sizeof(int)); // On alloue de la mémoire pour le tableau
        if (ageAmis == NULL) // On vérifie si l'allocation a marché ou non
        {
            exit(0); // On arrête tout
        }

        // On demande l'âge des amis un à un
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        // On affiche les âges stockés un à un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

        // On libère la mémoire allouée avec malloc, on n'en a plus besoin
        free(ageAmis);
    }

    return 0;
}
