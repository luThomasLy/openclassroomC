#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[4], i = 0;

    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    printf("on parcours le tableau : \n");
    //parcourir un tableau et ses valeurs
    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

        //initialisation du tableau
    for (i = 0 ; i < 4 ; i++)
    {
        tableau[i] = 0;
    }

    printf("\non remet le tableau à zéros : \n");
        //parcourir un tableau et ses valeurs
    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
