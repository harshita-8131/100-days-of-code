#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        int previous = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previous = arr[j];
                break;
            }
        }

        if (i > 0)
        {
            printf(",");
        }

        printf("%d", previous);
    }

    printf("\n");

    return 0;
}
