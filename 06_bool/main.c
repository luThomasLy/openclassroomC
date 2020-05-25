#include <stdio.h>
#include <stdlib.h>

int main()
{
//Cette variablemajeurest un booléen
//Retenez bien ceci : on dit qu'une variable à laquelle on fait prendre les valeurs 0 et 1 est un booléen.

//    int age = 20;
//    int majeur = 0;
//
//    majeur = age >= 18;
//    printf("Majeur vaut : %d\n", majeur);


//Souvent, on fera un testifsur une variable booléenne :

    int majeur = 1;

    if (majeur)
    {
        printf("Tu es majeur !");
    }
    else
    {
        printf("Tu es mineur");
    }

    return 0;
}
