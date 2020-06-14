#include <stdio.h>
#include <stdlib.h>

int main()
{
////    exemple avec scanf
//    char nom[20] = {0};
//
//    printf("Quel est votre nom ? ");
//    scanf("%s", nom); //exemple : Thomas LY
//    printf("Ah ! Vous vous appelez donc %s !\n\n", nom); // LY va disparaitre à la console


//    exemple avec fgets
    char nom[10];

    printf("Quel est votre nom ? ");
    fgets(nom, 10, stdin);
    printf("Ah ! Vous vous appelez donc %s !\n\n", nom);

    return 0;
}
