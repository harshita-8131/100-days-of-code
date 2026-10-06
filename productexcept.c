#include <stdio.h>

int main()
{
    int n, i;
    int nums[100], answer[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int product = 1;

    // Product of elements on the left
    for (i = 0; i < n; i++)
    {
        answer[i] = product;
        product = product * nums[i];
    }

    product = 1;

    // Product of elements on the right
    for (i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * product;
        product = product * nums[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}
