#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[4];

    tableau[0] = 10;
    tableau[1] = 230;
    tableau[2] = 100;
    tableau[3] = 150;

    //En fait, si vous écrivez juste tableau, vous obtenez un pointeur.
    //C'est un pointeur sur la première case du tableau. Faites le test :

    printf("%d\n", tableau);

    //valeur de l'indice
    printf("%d\n", tableau[0]);

    //idem à au printf du dessus
    //printf("%d\n", *tableau);

    return 0;
}
