#include <stdio.h>
#include <stdlib.h>

int main()
{

//exemple 01
//code asci de 'A'
//    char lettre = 'A';
//
//    printf("%c\n", lettre);
//    printf("%d\n", lettre);

//exemple 02
//    char lettre = 0;
//
//    printf("saisir une lettre : \n");
//    scanf("%c", &lettre);
//    printf("%d", lettre);

//exemple 03
//    char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le \0
//
//    // Initialisation de la chaîne (on écrit les caractères un à un en mémoire)
//    chaine[0] = 'S';
//    chaine[1] = 'a';
//    chaine[2] = 'l';
//    chaine[3] = 'u';
//    chaine[4] = 't';
//    chaine[5] = '\0';
//
//    // Affichage de la chaîne grâce au %s du printf
//    printf("%s", chaine);

//autres façons exemple 03
//    char chaine[] = "Salut"; // La taille du tableau chaine est automatiquement calculée
//    printf("%s", chaine);

//exemple 04
    char chaine[] = "Salut";
    int longueurChaine = 0;

    // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaine %s fait %d caracteres de long", chaine, longueurChaine);

    return 0;
}
