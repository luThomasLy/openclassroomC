#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fichier = NULL;
    char chaine[100] = "";

    fichier = fopen("test.txt", "r+");
    rename("test.txt", "test_renomme.txt");

    //supprime le fichier
    //remove("test.txt");

     if (fichier != NULL)
    {
        //printf("Ok, le fichier est ouvert");

        // On peut écrire dans le fichier
        //fputs("la vie est injuste et j'aimerais que justice soit faite", fichier);

        fgets(chaine, 100, fichier); // On lit le caractère
        printf("%s", chaine); // On l'affiche

        fclose(fichier); // On ferme le fichier
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;
}
