#include <stdio.h>

int main()
{
    int i, j, space;

    // Upper part
    for (i = 1; i <= 7; i = i + 2)
    {
        for (space = 7; space > i; space = space - 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower part
    for (i = 5; i >= 1; i = i - 2)
    {
        for (space = 7; space > i; space = space - 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
