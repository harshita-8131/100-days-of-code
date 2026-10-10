#include <stdio.h>

int main()
{
    int n, i, j;
    int nums[100], answer[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        answer[i] = 1;

        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("Output: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
