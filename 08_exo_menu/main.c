#include <stdio.h>
#include <stdlib.h>

int main()
{

int choixMenu = 0;

    printf("=== Menu ===\n");
    printf("1. Royal Chesse\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Chicken\n");
    printf("4. Big Mac\n");
    printf("Votre choix ?\n");

    scanf("%d", &choixMenu);

    switch(choixMenu)
    {
    case 1:
        printf("menu Royal Cheese");
        break;
    case 2:
        printf("menu Mc Deluxe");
        break;
    case 3:
        printf("menu Mc Chicken");
        break;
    case 4:
        printf("menu Big Mac");
        break;
    default:
        printf("il n'y a pas de menu");
        break;
    }

    return 0;
}
