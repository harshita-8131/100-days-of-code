#include <stdio.h>

int main()
{
    int n, k, i, j;
    int arr[100];

    // Read the size of the array
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the window size
    scanf("%d", &k);

    // Check each window of size k
    for (i = 0; i <= n - k; i++)
    {
        int found = 0;

        // Find the first negative element in the window
        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative element exists
        if (found == 0)
        {
            printf("0");
        }

        // Print a space between results
        if (i < n - k)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
