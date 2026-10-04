#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];
    int next;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        next = -1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        if (i > 0)
        {
            printf(", ");
        }

        printf("%d", next);
    }

    return 0;
}
