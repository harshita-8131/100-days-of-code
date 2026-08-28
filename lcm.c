#include <stdio.h>

int main()
{
    int n1, n2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }

    while(1)
    {
        if(max % n1 == 0 && max % n2 == 0)
        {
            break;
        }

        max++;
    }

    printf("LCM of %d and %d = %d\n", n1, n2, max);

    return 0;
}
