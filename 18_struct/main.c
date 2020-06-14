#include <stdio.h>
#include <stdlib.h>

typedef struct Coordonnees Coord;
struct Coordonnees
{
    int x;
    int y;
};

void initialiserCoordonnees(Coord* point)
{
    point->x = 0;
    point->y = 0;
}

int main()
{
    Coord monPoint;
    Coord *point = &monPoint;

    point->x = 15;
    point->y = 25;

    printf("x : %d y : %d\n", point->x, point->y);

    point->x = 35;
    point->y = 45;

    printf("x : %d y : %d", point->x, point->y);

    return 0;
}
