#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//
//    printf("char : %d octets\n", sizeof(char));
//    printf("int : %d octets\n", sizeof(int));
//    printf("long : %d octets\n", sizeof(long));
//    printf("double : %d octets\n", sizeof(double));
//
//    return 0;
//}

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    printf("Coordonnees : %d octets\n", sizeof(Coordonnees));

    return 0;
}
