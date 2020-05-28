#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    int nombreMystere = 0;
    int nombreSaisie = 0;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    //printf("Le nombre mystere est : %d \n", nombreMystere);

    do
    {
    printf("Quel est le nombre ? ");
    scanf("%d", &nombreSaisie);

        if(nombreMystere > nombreSaisie)
        {
            printf("c'est plus\n");
        }
        else if(nombreMystere < nombreSaisie)
        {
            printf("c'est moins\n");
        }
        else
        {
            printf("Bravo vous avez trouve le nombre mystere\n");
        }
    }
    while(nombreSaisie != nombreMystere);


    return 0;
}
