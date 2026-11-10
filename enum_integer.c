
#include <stdio.h>

int main()
{
    enum Numbers
    {
        ONE = 10,
        TWO = 20,
        THREE = 30,
        FOUR = 40
    };

    printf("Value of ONE = %d\n", ONE);
    printf("Value of TWO = %d\n", TWO);
    printf("Value of THREE = %d\n", THREE);
    printf("Value of FOUR = %d\n", FOUR);

    return 0;
}
