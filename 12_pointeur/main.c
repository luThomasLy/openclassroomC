#include <stdio.h>
#include <stdlib.h>

//exemple01
//void decoupeMinutes(int heures, int minutes);
//
//int main()
//{
//    int heures = 0, minutes = 90;
//
//    /* On a une variable minutes qui vaut 90.
//    Après appel de la fonction, je veux que ma variable
//    "heures" vaille 1 et que ma variable "minutes" vaille 30 */
//
//    decoupeMinutes(heures, minutes);
//
//    printf("%d heures et %d minutes", heures, minutes);
//
//    return 0;
//}
//
//void decoupeMinutes(int heures, int minutes)
//{
//    heures = minutes / 60;  // 90 / 60 = 1
//    minutes = minutes % 60; // 90 % 60 = 30
//}

//exemple02
//age:désigne la valeur de la variable
//&age:désigne l'adresse de la variable

//int main()
//{
//    int age = 10;
//
//    printf("L'adresse de la variable age est : %d\n", age);
//    printf("L'adresse de la variable age est : %p\n", &age);
//}

//exemple03
//int main()
//{
//    int nb = 0;
//    int *pnb = &nb;
//
//    printf("%d\n", *pnb);
//    printf("%d\n", &nb);
//}

//exemple04
//void triplePointeur(int *pointeurSurNombre);
//
//int main()
//{
//    int nombre = 5;
//
//    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
//    printf("%d", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse
//
//    return 0;
//}
//
//void triplePointeur(int *pointeurSurNombre)
//{
//    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
//}

//exemple05
void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main()
{
    int heures = 0, minutes = 180;

    // On envoie l'adresse de heures et minutes
    decoupeMinutes(&heures, &minutes);

    // Cette fois, les valeurs ont été modifiées !
    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    /* Attention à ne pas oublier de mettre une étoile devant le nom
    des pointeurs ! Comme ça, vous pouvez modifier la valeur des variables,
    et non leur adresse ! */
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}

