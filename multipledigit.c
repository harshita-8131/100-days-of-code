#include <stdio.h>

int main()
{
    long long n;
    int digit;
    int count[10] = {0};
    int i, max, result;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if(n < 0)
    {
        n = -n;
    }

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    max = count[0];
    result = 0;

    for(i = 1; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times: %d\n", result);
    printf("It occurs %d times.\n", max);

    return 0;
}
