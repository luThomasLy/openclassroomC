#include <stdio.h>
#include <stdlib.h>

int quintuple(int nombre)
{
    return 5 * nombre;
}

double conversion(double euros)
{
    double francs = 0;

    francs = 6.55957 * euros;
    return francs;
}

int main()
{
    int nombreEntre = 0;
    int nombreQuintuple = 0;

    printf("Saisir un nombre... ");
    scanf("%d", &nombreEntre);

    nombreQuintuple = quintuple(nombreEntre);

    // Le résultat de la fonction est directement envoyé au printf et n'est pas stocké dans une variable
    printf("Le quintuple de ce nombre est %d\n", quintuple(nombreEntre));

    printf("le quintuple du nombre entre en francs = %fF\n", conversion(nombreQuintuple));

    return 0;
}
