#include <stdio.h>

int main()
{
    int i;

    // Print 1 star
    printf("*\n\n");

    // Print 3 stars vertically
    for (i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    // Gap
    printf("\n");

    // Print 5 stars vertically
    for (i = 1; i <= 5; i++)
    {
        printf("*\n");
    }

    // Gap
    printf("\n");

    // Print 3 stars vertically
    for (i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    // Gap
    printf("\n");

    // Print the final star
    printf("*\n");

    return 0;
}
