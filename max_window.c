#include <stdio.h>

int main()
{
    int n, k, i, j;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the window size k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid window size");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        int max = arr[i];

        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d", max);

        if (i < n - k)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
