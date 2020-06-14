#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fichier = NULL;
    int score[3] = {0}; // Tableau des 3 meilleurs scores

    fichier = fopen("testScore.txt", "r");

    if (fichier != NULL)
    {
    //lit le fichier, qui contient 3 scores et les renvois sur la console
        fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
        printf("Les meilleurs scores sont : %d, %d et %d", score[0], score[1], score[2]);

        fclose(fichier);
    }

    return 0;
}
