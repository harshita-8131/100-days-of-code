#include <stdio.h>

int main()
{
    int i, j;

    // Upper part of the pattern
    for (i = 1; i <= 9; i = i + 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower part of the pattern
    for (i = 7; i >= 1; i = i - 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
