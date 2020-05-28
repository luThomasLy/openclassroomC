#include <stdio.h>
#include <stdlib.h>

void affiche(int *tableau, int tailleTableau);
int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
void ordonnerTableau(int tableau[], int tailleTableau);

int main()
{
    int tableau [4] = {10,20,30,40} ;
    int tableauCopie [4];

    affiche(tableau, 4);
    sommeTableau(tableau, 4);
    moyenneTableau(tableau, 4);
    copie(tableau, tableauCopie, 4);

    ordonnerTableau(tableau, 4);

    return 0;
}

void affiche(int *tableau, int tailleTableau)
{
    int i = 0;
    for(i = 0 ; i < tailleTableau ; i++)
    {
        printf("affichage du tableau : %d\n", tableau[i]);
    }
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int i = 0;
    int somme = 0;

    for(i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }
    printf("\nla somme du tableau = %d\n", somme);
    return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i = 0;
    int somme = 0;
    int moyenne = 0;

    for(i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }
    moyenne = somme / tailleTableau;
    printf("\nla moyenne du tableau = %d\n", moyenne);
    return moyenne;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i = 0;
    //int tableauOriginal[i];
    //int tableauCopie[i];

    memcpy(tableauCopie, tableauOriginal, sizeof tableauCopie);
    printf("\nmemcpy : %d\n", memcpy);
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
//    int i = 0;
//
//    valeurMax(tableau[i]);
//
//    for(i=0 ; i < sizeof tableau[i] ; i++)
//    {
//        if (tableau[i] > valeurMax)
//        {
//            valeurMax = tableau[i];
//        }
//    }
//
//    printf("%d", valeurMax);
//    return valeurMax;
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i = 0;

    for ( i = 0; i < tailleTableau ; i++)
    {
        int ibis = 1;

        for (ibis = 1; ibis < (tailleTableau - i); ibis++) // comparer tableau[i] avec tableau[i + ibis]
        {

            if ( tableau[i]>tableau[i+ibis])
            //lors du premier cycle (i = 0) (ibis = 1), ca compare tableau[0] à tableau[0 + 1]
            // puis on repart dans la boucle for, on revient (i = 0) , (ibis = 2), on compare tableau[0] à tableau [0+2]
            // à la fin on aura la plus petite valeur à tableau[0], non ?
            {
                int stocka=0;//là je fais des copies des valeurs pour pouvoir les intervertir, je stock les valeurs dans stocka et stockb
                int stockb=0;

                stocka = tableau[i];
                stockb = tableau[i+ibis];

                tableau[i] = stockb;
                tableau[i+ibis] = stocka;
            }

        }
        printf("tableau ordonné : %d\n", tableau[i]);

    }
}
