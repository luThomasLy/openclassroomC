#include <stdio.h>
#include <stdlib.h>

struct Personne
{
    char nom[500];
    char prenom[50];
    char adresse[1000];

    int age;
    int genre; // Booléen : 1 = garçon, 0 = fille
};
typedef struct Personne Pers;

int main()
{
    int nbJoueurs = 0;
    int i = 0;

    printf("combien y a t'il d utilisateurs \n");
    scanf("%d",&nbJoueurs);

    Pers utilisateur[nbJoueurs];

    do
    {
        printf("Utilisateur %d\n", i+1);

        printf("Quel est votre nom ? ");
        scanf("%s", utilisateur[i].nom);
        printf("Votre prenom ? ");
        scanf("%s", utilisateur[i].prenom);
        printf("Vous vous appelez %s %s\n", utilisateur[i].prenom, utilisateur[i].nom);
        i++;
    }
    while(i < nbJoueurs);

    return 0;
}

