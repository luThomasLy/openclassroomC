#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *memoireAllouee = NULL;
    memoireAllouee = malloc(sizeof(int));

    printf("%d\n", memoireAllouee);

    //test d'allocation de mémoire, sinon on arrête le programme
    if(memoireAllouee == NULL)
    {
        exit(0);
    }

    printf("\nQuel est ton age ? ");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);

    //On libère la mémoire
    free(memoireAllouee);

    return 0;
}
