#include <stdio.h>
#include <stdlib.h>

typedef enum Volume Vol;
enum Volume
{
    FAIBLE = 10, MOYEN = 50, FORT = 100
};

int main()
{
    Vol musique = MOYEN;

    if (musique == MOYEN)
    {
        printf("Jouer la musique au volume moyen\n");
    }

    return 0;
}
